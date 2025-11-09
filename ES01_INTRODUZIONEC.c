//viene elaborata dal preprocessore prima della compilazione del programma
#include <stdio.h>//LIBRERIA STANDARD delle funzioni di base input e output tipo printf




//funzione che indica l'inizio del nostro programma e restituisce un intero (int)
//void significa che la funzione non riceve nulla al suo interno come parametro
int main(void){//la { indica il corpo della funzione
    
    int  numero1 = 0;
    int numero2 = 0;
    int sum = 0;
    printf("ciao mi chiamo riccardo\n");//stampa  a schermo una stringa di testo e va a capo successivamente
    //l'output continua nella riga successiva
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);//legge un intero e %d specifica il tipo di dato che deve essere inserito
                          //%d è la STRINGA DI CONTROLLO CHE SIGNIFICA DECIMALE INTERO.
                          //Il simbolo & è l'operatore di indirizzo che specifica (se affiancato al nome di una variabile)
                          //la locazione di memoria dove la variabile è contenuta, lo comunica a scanf che memorizza il valore in quella
                          //locazione
                          
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    sum = numero2 + numero1;
    printf("La  somma dei due numeri è: %d", sum);
    return 0;
}