#include <stdio.h>

/*
 Funzione f1:
 - riceve un intero 'b'
 - mostra sullo stdout il valore di 'd' come carattere
 - ritorna il valore (char) di 'd' come int
*/
int f1(int b) {
    // ------------------------------------------------------------
    // Dichiarazioni locali alla funzione (scope: tutta la funzione)
    // ------------------------------------------------------------
    // 'c' e 'd' sono due variabili di tipo char dichiarate qui:
    // - vivono per tutta la durata della chiamata della funzione f1()
    // - non vengono distrutte fino al ritorno dalla funzione
    char c, d;

    // ------------------------------------------------------------
    // Assegnazione iniziale
    // ------------------------------------------------------------
    // Qui assegniamo alla 'c' esterna il carattere letterale 'd'
    // (cioè il carattere minuscolo d, codice ASCII 100)
    c = 'd';        // c ora contiene il carattere 'd'

    // ------------------------------------------------------------
    // Primo blocco: non dichiara nuove variabili
    // ------------------------------------------------------------
    {
        // Qui NON creiamo una nuova 'c'. Stiamo modificando la 'c' già
        // dichiarata sopra (quella con scope della funzione). per cui sono inutili queste parentesi e possiamo non considerarle
        // Quindi questa assegnazione è permanente fino a che la funzione
        // non modifica di nuovo 'c' o termina.
        c = 'c';    // modifica permanente della c esterna: ora c = 'c'
    }
    // fine del blocco: non c'è stata alcuna variabile locale da distruggere

    // ------------------------------------------------------------
    // Secondo blocco: dichiara una nuova variabile locale chiamata 'c'
    // ------------------------------------------------------------
    {
        // Questa riga dichiara una NUOVA variabile 'c' locale a questo
        // blocco. Essa *nasconde* (shadowing) la 'c' esterna solo per la
        // durata del blocco.
        //
        // Tipo di conversione: b è un int; viene convertito implicitamente
        // in char quando lo assegniamo a 'c'.
        //
        // Nota: questa 'c' è diversa dalla 'c' esterna. Quando esci dal
        // blocco, questa 'c' locale viene distrutta e la 'c' esterna
        // rimane con il valore che aveva prima dell'entrata nel blocco.
        char c = b;  // c locale = (char)b ; esiste solo dentro queste graffe

        // Esempio didattico (opzionale): se volessimo, dentro il blocco
        // potremmo stampare questa c locale per vedere il suo valore:
        // printf("c locale = %c (valore numerico = %d)\n", c, (int)c);
    }
    // fine del blocco: la 'c' locale dichiarata sopra viene distrutta qui

    // ------------------------------------------------------------
    // Dopo i blocchi: usiamo di nuovo la 'c' esterna
    // ------------------------------------------------------------
    // Qui 'c' si riferisce alla variabile dichiarata all'inizio della
    // funzione (quella "esterna"). Poiché il secondo blocco aveva
    // creato una 'c' tutta sua e poi l'aveva distrutta, la 'c' esterna
    // conserva il valore impostato prima (cioè 'c' letterale).
    d = c;  // copia il valore della c esterna in d. d = 'c'

    // Stampa il carattere memorizzato in d.
    // Usiamo %c per stampare il carattere; \n per andare a capo.
    printf("d = %c\n", d);  // output atteso: "d = c"

    // Ritorniamo d come int: il valore restituito è il codice ASCII
    // del carattere contenuto in d. Se d = 'c', viene restituito 99.
    return d;
}

/* 
 Nota finale riassuntiva:
 - Le parentesi graffe ({}) creano un nuovo scope.
 - Le variabili dichiarate dentro uno scope esistono solo dentro
   quello scope e vengono distrutte uscendo dallo scope.
 - Assegnare a una variabile dichiarata in uno scope superiore
   (es. la c esterna) la modifica permanentemente finché non viene
   riassegnata o la funzione termina.
*/
