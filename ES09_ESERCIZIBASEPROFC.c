/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
char choise[14];
float conversione(float f,int n){
      float cont;
     
        if (n==1){
            float celsius = (f - 32) / 1.8;
            cont = celsius;
            char choise[] = "celsius";
            }
        else if(n==2){
            float Faranait =  (f * 1.8) + 32;
            cont = Faranait;
           char choise[] = "Faranait";
        }
        return cont;
    
}
int main()
{
    int n;
    float f;
    printf("Inserisci i gradi: ");
    scanf("%f", &f);
    printf("Come li vuoi convertire? \n 1: Celsius - 2: Faranait ");
    scanf("%d", &n);
    if(strcmp(choise, "celsius") == 0){
    printf("I gradi convertiti sono: %.2f gradi celsius",conversione(f,n));
    }
    else{
            printf("I gradi convertiti sono: %.2f gradi faranait",conversione(f,n));

    }
    return 0;
}