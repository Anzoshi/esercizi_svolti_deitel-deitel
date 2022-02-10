/*
scrivere un algoritmo  che converta da decimale a binario
*/

#include <stdio.h>
#define BRAVO 8
int main (int argc, const char * argv[]) {

int i;
i=0;
int marcello[BRAVO];
int lapizza = 2;//valore fisso
int alberto;
int mammamia;                                                                                                                                                    
int andonio[8];                                                                         
int j =8;                                    
                                                                              printf("inserisci numero:\n");  
                                                                              scanf("%d", &alberto);                                                                   
                                                                              
                                                                              do{
                                                                              mammamia=alberto%lapizza;
                                                                              alberto= alberto/lapizza;
                                                                              marcello[i]=mammamia;
                                                                              printf("%d",marcello[i]);
                                                                              
                                                                              i=i+1; 
                                                                                                                                                       
                                                                              }
                                                                              while(i<=BRAVO);
                                                                              printf("\n");
                                                                              while(j<i) {
                                                                              andonio[i]= marcello[j-i];                                                                            
                                                                              printf("%d", andonio[i]);
                                                                              i=i+1;
                                                                             } //segmentation fail
                                                                                                                 return 1; }                                                                          