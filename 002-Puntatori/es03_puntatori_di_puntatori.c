#include <stdio.h>	//printf
int main(void) {

  printf("\n");
  
  int i=3;
  printf("int i=3; - Dichiarazione della variabile i e assegnazione del valore 3 \n");
  printf("i->%d - Contenuto della variabile i \n",i);
  printf("&i->%d - Indirizzo della variabile i \n",&i);
  printf("\n");

  int *j=&i;
  printf("int *j=&i; - Dichiarazione del puntatore j e assegnazione dell'indirizzo di i \n");
  printf("j=&i; - Assegnazione dell'indirizzo di i \n");
  printf("*j=i->%d - Contenuto della variabile puntata \n", *j);
  printf("j->%d - Indirizzo della variabile puntata \n", j);
  printf("&j->%d - Indirizzo del puntatore\n", &j);
  printf("\n");

  int **k=&j;
  printf("Puntatore di un puntatore \n");
  printf("int **k=&j; - Dichiarazione del puntatore *k e assegnazione dell'indirizzo di j \n");
  printf("**k=*j=i->%d - Contenuto della variabile puntata \n", **k);
  printf("*k=j->%d - Contenuto puntatore *k = contenuto di j = inidirizzo di i \n", *k);
  printf("k=&*k=&j->%d - Contenuto puntatore k = inidirizzo di j \n", k);
  printf("&k->%d - Indirizzo del puntatore k \n", &k);
  printf("\n");

  int ***t=&k;
  printf("Puntatore di un puntatore di un puntatore \n");
  printf("int ***t=&k; - Dichiarazione del puntatore **t e assegnazione dell'indirizzo di k \n");
  printf("***t=**k=*j=i->%d - Contenuto della variabile puntata \n", ***t);
  printf("**t=*k=j->%d - Contenuto puntatore **t = ... = indirizzo di i \n", **t);
  printf("*t=&**t=k=&j->%d - Contenuto puntatore *t = contenuto di t = inidirizzo di j \n", *t);
  printf("t=&*t=&k->%d - Contenuto puntatore t = inidirizzo di k \n", t);
  printf("&t->%d - Indirizzo del puntatore t \n", &t);
  printf("\n");
  
  **k=5;
  printf("**k=5; \n");
  printf("i=%d; *j=%d; **k=%d; ***t=%d; \n", i, *j, **k, ***t);
  printf("\n");

  return 0;
}
