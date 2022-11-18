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
	//Copia stringa utilizzando la funzione strcpy
	strcpy(vet3, vet1);


	//-----------------------------------------------------------
	printf("\nStampa a schermo dei valori di vet1[] - come interi\n");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=0;i<10;i++) {
		printf("vet1[%d]= %d\n", i, vet1[i]);
	}
	//-----------------------------------------------------------
	printf("\nStampa a schermo dei valori di vet2[] - come interi\n");
	printf("vet2 = {");
	for(int i=0;i<10;i++) {
		printf("%d", vet2[i]);
		if(i<9) printf(", ");
	}
	printf("}\n");
	//-----------------------------------------------------------
	printf("\nStampa a schermo dei valori di vet2[] - Come char\n");
	for(int i=0;i<10;i++) {
		printf("%c", vet3[i]);
	}
	//-----------------------------------------------------------
	printf("\nStampa a schermo dei valori di vet3[] - come char\n");
	for(int i=0;i<10;i++) {
		printf("%c", vet3[i]);
	}
	//-----------------------------------------------------------
	printf("\nStampa a schermo della stringa vet3[]\n");
	//nella printf usiamo %s per stampare la stringa
	printf("%s", vet3);

	printf("\n");
	return 0;
} 
