#include <stdio.h>  //printf
int main(void) {

  printf("\n");

  int i=2;
  printf("int i=2; - Dichiarazione della variabile i e assegnazione del valore 2 \n");
  printf("i->%d - Contenuto della variabile i \n",i);
  printf("&i->%d - Indirizzo della variabile i \n",&i);
  printf("\n");

  int *p=&i; //int *p; p=&i;
  printf("int *p=&i; //int *p; p=&i; \n");
  printf("int *p=&i; - Dichiarazione del puntatore p e assegnazione dell'indirizzo di i \n");
  printf("int *p; - Dichiarazione del puntatore p \n");
  printf("p=&i; - Assegnazione dell'indirizzo di i \n");
  printf("*p=i->%d - Contenuto della variabile puntata \n", *p);
  printf("p->%d - Indirizzo della variabile puntata \n", p);
  printf("&p->%d - Indirizzo del puntatore\n", &p);
  printf("\n");

  *p=33; //assegno 33 alla variabile puntata da p
  printf("*p=33; //assegno 33 alla variabile puntata da p \n");
  printf("i=%d; *p=%d;\n", i, *p);

  return 0;
}
