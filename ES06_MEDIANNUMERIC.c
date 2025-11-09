//MEDIA DI N VALORI//

#include <stdio.h>

int main()
{
    int nStud = 0;
    
    printf("Inserisci il numero di studenti: ");
    scanf("%d", &nStud);
    
    int i = 0;
    float somma = 0;
    float voto;
    
    while(i < nStud){
        
        printf("voto: \t");
        scanf("%f", &voto);
        somma += voto;
        i++;
        
    }
    float media = somma / nStud;
    printf("La media dei voti è: %f", media);
    
    

    
    return 0;
}