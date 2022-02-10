/* 
Si scriva un programma che calcoli l'MCD con l'algoritmo di Euclide*.
*l'algoritmo di Euclide è u algoritmo usato per trovare il massimo comun divisore (indicato con MCD), tra due numeri interi. Dati due numeri a e b, si controlla se b è 0, se lo è a è l' MCD, se non lo è, di divie a/b e si assegna a r il resto della divisione. Se r = 0 allora si procede affermando che la b della prima r non nulla è l' MCD ricercato, se non è così allora occorre riassegnare che a = b e b = r e si continua fintanto che la r non diviene nulla.
*/ 

#include <stdio.h>
#include <stdlib.h>
int main (int argc, const char  * argv[]){

int A;
int B;
int R;
                                                                                       printf("inserisci due numeri\n");
                                                                                       scanf("%d%d", &A, &B);
                                                                                      
                                                                                       if(B==0) {
                                                                                       printf("%d è il massimo comun divisore\n", A);
                                                                                       }else{ 
                                                                                     
                                                                                       do{   R=A%B;
                                                                                       if(R==0)                                                                                       
                                                                                      { 
                                                                                      printf("%d è il massimo comun divisore\n",B);
                                                                        
                                                                                      }else{
                                                                                        A=B;
                                                                                        B=R;
                                                                                        
                                                                                        }} while(R!=0);
                                                                                        return 0;}}
                                                                                       
