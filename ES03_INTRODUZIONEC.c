/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//calcolo quadrato e cubo di numeri da 0 a 10
#include <stdio.h>

int main()
{
int n=3;
int quad = 0;
int cub = 0;

 
 printf("Numero\tQuadrato\tCubo\n");// le tabulazioni si fanno con \t e divide in colonne
 for(int i=0;i<=10;i++){
     n=i;
     quad = n*n;
     cub = n*n*n;
  printf("%d\t%d\t\t%d\n", n,quad,cub);//anche qui uso tabulazioni e il doppio \t vicino per formattare meglio le cifre  lunghe
 }
 
    return 0;
}

