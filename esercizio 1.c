/*
Scrivere un programma che chieda di inserire due date nel formato gg/mm/aaaa e stampi la più recente.
*/
#include <stdio.h>
int main (int argc, const char * argv[]) {

int giorno1,mese1,anno1;
int giorno2,mese2,anno2;
                                                       printf("inserisci la prima data di due");
                                                       scanf("\n%d/%d/%d\n", &giorno1, &mese1, &anno1);
                                                       printf("inserisci la seconda data di due\n");
                                                       scanf("\n%d/%d/%d\n", &giorno2, &mese2, &anno2);
                                                      
                                                        if(anno1>anno2) {
                                                        printf("%d/%d/%d è la più recente", giorno1, mese1, anno1);
                                                        }else if(anno1==anno2 && mese1>mese2){    
                                                        printf("%d/%d/%d è più recente", giorno1, mese1, anno1);
                                                        }else if(anno1==anno2 && mese1== mese2 && giorno1>giorno2){
                                                        printf("%d/%d/%d è più recente", giorno1, mese1, anno1);
                                                        }else{ printf("%d/%d/%d è più recente", giorno2, mese2, anno2);
                                                        }                                                                                                                                                                                                            
                                                       return 0; }
                                                       