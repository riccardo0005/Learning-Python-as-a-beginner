

//figure base in c e utilizzo switch
#include <stdio.h>



void stampaScacchiera(int n){
    /*Scrivere una funzione che dato un intero N,
stampi a schermo una scacchiera di lato N
come in figura.*/
int larghezza = n*n; 
int conta=0;
int righe =0;
int alterno=1;
 for(int linea=0;linea<=larghezza;linea++){
            printf("-");
        }
        printf("\n");
for(int colonne=0;colonne<larghezza;colonne++){
    int contaAsterischi = 0;
        int contaSpazi = 0;
        if(righe == n){
        
        for(int linea=0;linea<=larghezza;linea++){
            printf("-");
        }
            printf("\n");
            alterno++;
            righe=0;
        }
        
    for (int i=0; i<=larghezza+1;i++){//fa ogni riga con asterischi e spazi vuoti
            if(i==0||i==larghezza+1){//fa  il bordo
                printf("|");
            }
        else{
        
        if(alterno%2==0){//capisce se fare spazi o asterischi in base a alterno
      
        if(contaAsterischi<n){
            printf("*");
            contaAsterischi+=1;
        }
        else{
            printf(" ");
            contaSpazi+=1;
            if(contaSpazi>=5){
               
                contaSpazi=0;
                contaAsterischi=0;
            }
        }
        }else if(alterno%2!=0){
       
       
       if(contaSpazi<n){
            printf(" ");
            contaSpazi+=1;
            }
            else{
             printf("*");
            contaAsterischi+=1;
            if(contaAsterischi>=5){
               
                contaSpazi=0;
                contaAsterischi=0;
            }
           
            
        }
        }
        }
}

righe++;
printf("\n");//passo alla riga sotto che è la successiva
}
     for(int linea=0;linea<=larghezza;linea++){
            printf("-");
        }
}

    

void stampaQuadrato(){
        for(int i=1;i<=5;i++){
            for(int c=0;c<5;c++){
                
                printf("*");
            }
            printf("\n");
        }    
}

void stampaAlbero(){
     for(int i=1;i<=5;i++){
            for(int c=0;c<i;c++){
                
                printf("*");
            }
            printf("\n");
            
     }
}

void stampaAlberodecrescente(){
    
    for(int  i=5;i>=0;i--){
        for(int c = 0 ;c<i;c++){
            
            printf("*");
        }
        printf("\n");        
    }
    
    
}
void stampaQuadratovuoto(){
    
        for (int i =0;i<5;i++){
            for (int c = 0;c<5;c++){
                
            if(i==0|| i==4){
                    printf("*");
                }
            else{
                
                if(c==4 || c==0){
                    printf("*");
                }
                else{
                printf(" ");
                }
            }
            }
        printf("\n");
        }
}

void triangoloCrescenteSpazi(){
    int dim = 10;
    int t = dim -1;
    for(int i=1;i<=dim;i++){
        for(int c = 0; c<dim;c++){
            if (c == t){
                while (t<dim){
                   printf("*");
                    t++;
                     
                }
            }
                else{printf(" ");}
            }

            printf("\n");
            t = dim-(i+1); 
        }
    }

int main()
{
    int choose;
    
    printf("Che figura vuoi: \n 0: Triangolo con spazi crescente \t1: Quadrato \t2: Albero crescente\t 3:Albero decrescente\t 4:Quadrato vuoto\t 5:Scacchiera\n Inserisci il numero corrispondente: ");
    
    scanf("%d", &choose);
    
    switch(choose){
    
    
    case 0:
    
    
            triangoloCrescenteSpazi();
            break;
    case 1: 
            
            stampaQuadrato();
            break;
    case 2:
            stampaAlbero();
            break;
    case 3:
            stampaAlberodecrescente();
            break;
    case 4: 
            stampaQuadratovuoto();
            break;
        
    case 5: 
    printf("Inserisci la dimensione della scacchiera: ");
    int x;
    scanf("%d", &x);
    stampaScacchiera(x);
    }
    return 0;
}