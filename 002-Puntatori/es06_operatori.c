#include <stdio.h>	//printf
int main(void) {
  
	printf("\n");
 
  int *ptr; //Dichiariamo ptr come puntatore ad una variabile di tipo intero   
	printf("int *ptr; //Dichiariamo ptr come puntatore ad una variabile di tipo intero \n");
	printf("ptr->%d; //Non ancora inizializzato \n", ptr);
	printf("*ptr->; //Errore! Segmentation fault\n");
	printf("&ptr->%d; //indirizzo di ptr \n", &ptr);
	printf("\n");

  int a=0x1234;
	printf("int a=0x1234; \n");
	printf("\n");
   
  ptr=&a; //Stiamo assegnando l'indirizzo della variabile a al puntatore ptr.
	printf("ptr=&a; //Stiamo assegnando l'indirizzo della variabile a al puntatore ptr. \n");
	printf("        //Il valore del puntatore e' quindi indirizzo della var a \n");
	printf("ptr=&a=%x \n",ptr);
	printf("\n");

  *ptr=0xbbbb; //con l'asterisco accediamo al valore di una variabile
	printf("*ptr=0xbbbb; //con l'asterisco accediamo al valore di una variabile \n");
	printf("*ptr=%x \n",*ptr);  
	printf("a=%x \n",a);  
	printf("*&a=%x\n",*&a);  
	printf("\n");

	printf("//con la e commerciale otteniamo un indirizzo \n");
	printf("&a=%x\n",&a);  
	printf("&*&a=%x\n",&*&a);  
	printf("\n");  

	return 0;
} 


