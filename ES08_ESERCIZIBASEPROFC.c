/******************************************************************************

    Esercizi in C
    ----------------------------------------------------------
    Questo programma permette di eseguire diversi esercizi
    selezionabili dall’utente tramite un menu.  
    Ogni esercizio è gestito in un case dello switch nel main.

    Esercizi inclusi:
    1. Calcolo secondi trascorsi dall'inizio della giornata.
    2. Calcolo del passo in minuti/km per battere un record.
    3. Calcolo di anni, mesi, settimane e giorni dati totali giorni.
    4. Controllo se tre segmenti possono formare un triangolo.
    5. Controllo se tre segmenti formano un triangolo rettangolo.
    6. Conversione di un numero <=255 in binario.
    7. Trovare il massimo tra 3 numeri.
    8. Verificare se (0.1+0.1+0.1)==0.3.

*******************************************************************************/

#include <stdio.h>

// Funzione per calcolare anni, mesi, settimane e giorni rimanenti
// dati un numero totale di giorni.
void calcoloGiorni(int giorni, int *mesi, int *anni, int *settimane, int *giorniRimasti) {
     
    // Creo una variabile di lavoro "resto" per non modificare direttamente la variabile puntata
    int resto = giorni;

    // Calcolo il numero di anni completi (365 giorni)
    *anni = resto / 365;
    // Aggiorno i giorni rimanenti dopo aver calcolato gli anni
    resto %= 365;

    // Calcolo il numero di mesi completi (30 giorni)
    *mesi = resto / 30;
    // Aggiorno i giorni rimanenti dopo aver calcolato i mesi
    resto %= 30;

    // Calcolo il numero di settimane complete (7 giorni)
    *settimane = resto / 7;
    // Aggiorno i giorni rimanenti dopo aver calcolato le settimane
    resto %= 7;

    // Salvo i giorni rimanenti
    *giorniRimasti = resto;
}

// Funzione per calcolare il totale di secondi dati ore, minuti e secondi
int calcoloSecondi(int ore, int minuti, int secondi) {
    int totaleSecondi = secondi + (minuti * 60) + (ore * 60 * 60);
    // ritorna il totale dei secondi
    return totaleSecondi;
}

// Funzione per calcolare il passo medio (minuti/km) dato un record e lunghezza
float calcoloPasso(float record, float lunghezza) {
    float passo = record / lunghezza; 
    // ritorna il passo medio
    return passo;
}


void calcoloMin(int cont[], int n){
    int min;
    for (int i=0;i<n;i++){
    for (int c=i+1;c<=n;c++){
        if(cont[i]>cont[c]){
        min = cont[c];
        cont[c] = cont[i];
        cont[i] = min;
        }
    }
}
}
int main() {
    int choice; // Variabile per memorizzare la scelta dell’utente

    // Mostro il menu e chiedo la scelta
    printf("Scegli l'esercizio: 1-2-3-4-5-6-7-8: ");
    scanf("%d", &choice);

    // Switch per gestire ogni esercizio
    switch (choice) {
        case 1: {
            // Esercizio 1: calcolo dei secondi totali
            int ore;
            int minuti;
            int secondi;

            printf("Inserisci rispettivamente ore minuti e secondi: \n");
            scanf("%d%d%d", &ore, &minuti, &secondi);

            // Richiamo funzione e stampo risultato
            printf("Il totale di secondi è: %d secondi.\n", calcoloSecondi(ore, minuti, secondi));
            break;
        }

        case 2: {
            // Esercizio 2: calcolo passo per battere record
            float record;     // Record attuale in minuti
            float passo;      // Risultato passo medio
            float lunghezza;  // Lunghezza gara in km

            printf("Inserisci il record attuale in minuti e la lunghezza della maratona in km: \n");
            scanf("%f%f", &record, &lunghezza);

            passo = calcoloPasso(record, lunghezza);

            // Stampo il passo calcolato
            printf("Il passo medio da tenere per superare il record è di %.2f minuti/km\n", passo);
            break;
        }

        case 3: {
            // Esercizio 3: calcolo anni, mesi, settimane e giorni dati totali giorni
            int anni = 0;
            int mesi = 0;
            int settimane = 0;
            int giorni = 0;
            int giorniRimasti = 0;

            printf("Inserisci il numero di giorni: ");
            scanf("%d", &giorni);

            // Richiamo la funzione per fare i calcoli
            calcoloGiorni(giorni, &mesi, &anni, &settimane, &giorniRimasti);

            // Stampo i risultati finali
            printf("| %d anni -- %d mesi -- %d settimane -- %d giorni rimasti |\n", anni, mesi, settimane, giorniRimasti);
            break;
        }


        case 4:{
            int n;
         // Esercizio 7: trovare il massimo tra n numeri
            // TODO: implementare logica
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        int cont[n];
        for(int i=0;i<n;i++){
           scanf("%d", &cont[i]);
        }
        calcoloMin(cont,n);
        for(int i=0;i<n;i++){
            printf("%d \t", cont[i]);
        }
        }
        
        
            break;

        case 5:
            // Esercizio 5: verificare se tre segmenti formano un triangolo rettangolo
            // TODO: implementare logica
            break;

        case 6:
            // Esercizio 6: conversione di un numero intero <=255 in binario
            // TODO: implementare logica
            break;

        case 7:
           
             // Esercizio 4: verificare se tre segmenti possono formare un triangolo
            // TODO: implementare logica
            break;

        case 8:
            // Esercizio 8: verificare se (0.1+0.1+0.1)==0.3
            // TODO: implementare logica
            break;

        default:
            printf("Scelta non valida!\n");
            break;
    }

    return 0;
}
