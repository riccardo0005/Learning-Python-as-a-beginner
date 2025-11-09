/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int verifica = 0;
int controlloElementi(char car){
    //1 = carattere - 2 = numero - 3 = carattere speciale
 
    if(car >= 65 && car <= 90 || car >= 97 && car <= 122){verifica = 1;}
    
    else if(car >= 48 && car <= 57){verifica = 2;}
    
    else{verifica = 3;}

    return verifica;
}
int main()
{
    char car;
    scanf("%c", &car);
    
    controlloElementi(car);
    if(verifica == 0){printf("NULL - ERRORE");}
    
    else if(verifica ==  1){printf("Il carattere inserito è compreso tra A-Z ed è il carattere '%c' con valore decimale pari a '%d'.", car ,car);}
    
    else if(verifica == 2){printf("Il carattere inserito è un numero ed è il numero '%c' con valore decimale pari a '%d'.", car, car);}
    
    else{printf("Il carattere  inserito è un carattere speciale ed è il carattere '%c' con valore decimale pari a '%d'.", car, car);}


    return 0;
}