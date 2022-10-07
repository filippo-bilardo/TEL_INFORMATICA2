/* 
*/
#include <stdio.h>
#include <string.h> 

int main(void) 
{
	//Dichiarazione e assegnazione di valori al vettore di char vet1
	//Questi metodi di assegnazione sono validi solo in fase di dichiarazione
	//I valori del vettore non specificati sono inizializzati tutti a zero
	//char vet1[10]={'C', 'i', 'a', 'o', '\0'};
	//char vet1[10]={'c', 'i', 'a', 'o', 0};
	char vet1[10]="Ciao";
	char vet2[10];
	char vet3[10];

    //Copiamo i valori di vet1 in vet2
    //vet2 = vet1; //error: assignment to expression with array type
    for(int i=0;i<10;i++) {
		vet2[i]=vet1[i];
	}
	strcpy(vet3, vet1);

	//Stampa a schermo dei valori di vet1 e vet2
	printf("\nStampa a schermo dei valori di vet1[]\n");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<10;i++) {
		printf("vet1[%d]= %d\n", i, vet1[i]);
	}
	printf("\nStampa a schermo dei valori di vet2[]\n");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<10;i++) {
		printf("vet2[%d]= %d\n", i, vet2[i]);
	}
	printf("\nStampa a schermo dei valori di vet2[]=");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<10;i++) {
		printf("%c", vet2[i]);
	}
	printf("\nStampa a schermo dei valori di vet3[]=");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<10;i++) {
		printf("%c", vet3[i]);
	}
	printf("\nStampa a schermo della stringa vet3[]=");
	//nella printf usiamo %s per stampare la stringa
	printf("%s", vet3);

	printf("\n");
	return 0;
} 
