/*
Scrivi due insiemi, se uguali ritorna true
*/
#include <stdio.h>

#include <stdbool.h>
bool controllo(int a[], int b[], int dim){
    bool controllo = false;
    int cont = 0;
    for (int i = 0;i<dim;i++){
        for(int c =0;c<dim;c++){
            if(a[i] == b[c]){
                cont += 1;

            }
        }
        
    }
    if(cont == dim){
        controllo = true;
    }
    return controllo;
}
int main()
{
    int dim;
    
    printf("Inserisci la dimensione degli insiemi: ");
    scanf("%d", &dim);
    int insiemeA[dim];
    int insiemeB[dim];
    
    printf("RIEMPIMENTO DELL'INSIEME A \n");
    for(int i;i<dim;i++){
        printf("Elemento numero %d dell'insiemeA: ", i);
        scanf("%d", &insiemeA[i]);
    }
      printf("RIEMPIMENTO DELL'INSIEME B \n");
    for(int i;i<dim;i++){
        printf("Elemento numero %d dell'insiemeB: ", i);
        scanf("%d", &insiemeB[i]);
    }
    if(controllo(insiemeA,insiemeB,dim)){
   printf("SONO EQUIVALENTI");
    }else{printf("NON SONO EQUIVALENTI");}
    return 0;
}