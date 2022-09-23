/* inizializzazione parziale vettore
   gli altri elementi sono inizializzati a zero
*/
#include <stdio.h>

int main(void) 
{
	//Dichiarazione e assegnazione di valori al vettore di interi vet
	//Questo metodo di assegnazione si può fare solo in fase di dichiarazione
	//I valori del vettore sono inizializzati tutti a zero 
	int vet[5]={1, 2, 3};

	//Stampa a schermo dei valori di vet[]
	printf("\nStampa a schermo dei valori di vet[]\n");
	for(int i=0;i<5;i++) {
		printf("vet[%d]= %d\n",i , vet[i]);
	}

	//Dichiarazione
	float vet2[3];
	//inizializzazione dei valori
	//vet2[3]={1.0, 2.2, 9.3}; //Errore
	vet2[0]=1.0;
	vet2[1]=2.2;
	vet2[2]=9.3;
	
	//Stampa a schermo dei valori di vet2[]
	printf("\nStampa a schermo dei valori di vet2[]\n");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<3;i++) {
		printf("vet2[%d]= %f\n", i, vet2[i]);
	}

	printf("\n");
	return 0;
} 
