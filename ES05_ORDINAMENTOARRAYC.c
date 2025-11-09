//ordinare n numeri in ordine crescente
#include <stdio.h>


void ordinaNumeri(int arr[],int dim){//ordina numeri in ordine crescente in un array
    int min;
    
    for (int i = 0; i<dim-1; i++){//lavoro su due indici dell'array.Il primo indice "ferma una casella dell'array"
        for (int c = i+1; c < dim; c++)//il secondo itera ogni elemento e controlla se è minore del primo su cui il ciclo esterno è fermo
                                        //per ogni giro viene controllato ogni elemento dell'array con tutti gli altri
            
            if (arr[i]>arr[c]){
                min = arr[c];//variabile di appoggio per estrarre e ordinare l'array
                arr[c] = arr[i];//assegnazione nuovi valori ordinati
                arr[i] = min;//assegnazione nuovi valori ordinati
            }
            
        }
    }

int main()
{
    int numeri;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &numeri);

    int contNumeri[numeri];
    int cont = 1;
    for (int i = 0; i < numeri; i++){//riempimento array
        
        printf("Numero %d :  ", cont);
        scanf("%d", &contNumeri[i]);
    } 
    
    ordinaNumeri(contNumeri, numeri);//stampo array
    for(int i=0;i<numeri;i++){
        printf("%d\t", contNumeri[i]);
    }
    

    return 0;
}