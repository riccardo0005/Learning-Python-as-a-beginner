
//dato un numero mi stampa le singole cifre tabulate
#include <stdio.h>


int contaCifre(int num){//conta quante cifre ha il numero
    int i=1;//parto ovviamente dalla prima cifra che è il minimo 
   // if(num == 0){return 1;}
    while(num/10!=0){//conta le cifre di un numero
        num/=10;
        i++;//contatore delle cifre
    }
    return i;
}

void stampaArr(int arrCont[],int dim){//stampa un array passandone la dimensione e tabulandolo orizzontalmente
    for (int i=0;i<dim;i++){
        printf("%d\t",arrCont[i]);//stampa l'array alla posizione iniziale [0]
    }
}


int main(void)
{
//inizializzazione variabili    
int numero;//numero da dividere
int cifra;//variabile che assumerà i valori delle varie cifre per poi metterli negli array

 printf("Inserisci un numero \n");// le tabulazioni si fanno con \t e divide in colonne
 scanf("%d", &numero);


//dimensione dell'array che corrisponde al numero di cifre del numero iniziale. 
int dim = contaCifre(numero);

//creazione array di dimensione pari al numero di cifre DIM
int arrCont[dim];

//itera l'array permettendo di ordinare le cifre del numero in modo corretto quindi 
//permette di partire dalla fine dell'array. vale uno perchè gli array partono come posizione [0] e se un array ha 5 elementi l'ultima posizione
//è la [4] cioè 5-1(index)
int index = 1;
 
 //se il numero vale 0 mettiamo noi il valore 0 nell'unica posizione dell'array senno non parte il ciclo
 if(numero==0){
     arrCont[0] = 0;
 }else{
//finchè il numero è maggiore di 0 prendo ogni singola cifra che corrisponde al resto e la inserisco alla FINE dell'array poichè il resto mi da lultima
//cifra e non la prima e noi NON VOGLIAMO LEGGERE IL NUMERO AL CONTRARIO
 while(numero>0){
    cifra = numero % 10;
    arrCont[dim - index] = cifra;
    index++;//incremento per scendere di posizione dell'array
    numero/=10;
 }}
 stampaArr(arrCont,dim);// stampo l'array
 

 
 
    return 0;
}

