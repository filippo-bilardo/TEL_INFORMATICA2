#include <stdio.h>
int main(void) {

  printf("\n");
 
  int *ptr; //Dichiariamo ptr come puntatore ad una variabile di tipo intero    
            //gli riserviamo uno spazio di memoria a 32 bit 
	printf("int *ptr; //Dichiariamo ptr come puntatore ad una variabile di tipo intero  \n");
	printf("          //gli riserviamo uno spazio di memoria a 32 bit \n");
	printf("\n");
  
  int a; a=0x1234; ptr=&a;  
	printf("int a; a=0x1234; ptr=&a; \n");
	printf("a=%X, *ptr=%X, &a=%X, ptr=%X \n", a, *ptr, &a, ptr);
  *ptr=0xaaaa; //assegnamo alla variabile puntata da ptr un nuovo valore
	printf("*ptr=0xaaaa; //assegnamo alla variabile puntata da ptr un nuovo valore \n");
	printf("a=%X, *ptr=%X, &a=%X, ptr=%X \n", a, *ptr, &a, ptr);
	printf("\n");

  int b; b=0x2222; ptr=&b;  
	printf("int b; b=0x2222; ptr=&b; \n");
	printf("b=%X, *ptr=%X, &b=%X, ptr=%X \n", b, *ptr, &b, ptr);
  *ptr=0xaaaa; //assegnamo alla variabile puntata da ptr un nuovo valore
	printf("*ptr=0xaaaa; //assegnamo alla variabile puntata da ptr un nuovo valore \n");
	printf("b=%X, *ptr=%X, &b=%X, ptr=%X \n", b, *ptr, &b, ptr);
	printf("\n");
  
  int c[]={0x3333,0x4444,0x5555,0x6666}; //Dichiariamo c[] e gli assegnamo 4 valori
  printf("int c[]={0x3333,0x4444,0x5555,0x6666}; //Dichiariamo c[] e gli assegnamo 4 valori \n");
  ptr=&c[0]; //ptr=c //ptr punta alla base del vettore  
  printf("ptr=&c[0]; //ptr=c //ptr punta alla base del vettore \n");
  printf("ptr=%x, *ptr=%x \n", ptr, *ptr);
  ptr++; //incrementiamo ptr di una locazione di interi 
  printf("ptr++; //incrementiamo ptr di una locazione di interi \n");
  printf("ptr=%x, *ptr=%x \n", ptr, *ptr);
  ptr=ptr+2; //incrementiamo ptr di locazioni locazione di interi 
  printf("ptr++; //incrementiamo ptr di una locazione di interi \n");
  printf("ptr=%x, *ptr=%x \n", ptr, *ptr);
	printf("\n");
 
	return 0;
} 


