/* 
*/
#include <stdio.h>

int main(void) 
{
	//Dichiarazione e assegnazione di valori al vettore di interi vet
	//Questo metodo di assegnazione si può fare solo in fase di dichiarazione
	//I valori del vettore sono inizializzati tutti a zero
	int vet1[10]={4, 1, 3, 9, 9};
	int vet2[10];

    //Copiamo i valori di vet1 in vet2
    //vet2 = vet1; //error: assignment to expression with array type
    for(int i=0;i<10;i++) {
		vet2[i]=vet1[i];
	}

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

	printf("\n");
	return 0;
} 
