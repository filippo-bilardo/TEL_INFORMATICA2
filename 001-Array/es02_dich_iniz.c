/* inizializzazione parziale vettore
   gli altri elementi sono inizializzati a zero
*/
#include <stdio.h>

int main(void) 
{
	//Dichiarazione e assegnazione di valori al vettore di interi vet
	//Questo metodo di assegnazione si può fare solo in fase di dichiarazione
	//I valori del vettore sono inizializzati tutti a zero
	int vet_parz_iniz[10]={4, 1, 3};
	int vet_non_iniz[10];

	//Stampa a schermo dei valori di dati[]
	printf("\nStampa a schermo dei valori di vet_parz_iniz[]\n");
	for(int i=0;i<10;i++) {
		printf("vet_parz_iniz[%d]= %d\n",i , vet_parz_iniz[i]);
	}

	//Stampa a schermo dei valori di vet_non_iniz[]
	printf("\nStampa a schermo dei valori di vet_non_iniz[]\n");
	for(int i=0;i<10;i++) {
		printf("vet_non_iniz[%d]= %d\n",i , vet_non_iniz[i]);
	}

	//Dichiarazione
	float vet2[3];
	//inizializzazione dei valori successiva alla dichiarazione
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
