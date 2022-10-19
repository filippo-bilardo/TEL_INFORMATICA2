/**
Scrivere un programma che riempia un array di 26 elementi con lettere da "a" a "z". 
Non usare il tipo int, ma solo il tipo char per le variabili. Quando l'array è pieno, 
il programma deve stampare tutti i caratteri in ordine inverso, quindi stampare solo 
gli elementi dell'array che costituiscono la parola "ciao". Trova il modo più semplice 
per risolvere il problema. La tua versione del programma deve stampare lo stesso 
risultato dell'output previsto.

Esempio di Output
zyxwvutsrqponmlkjihgfedcba
ciao
*/
#include <stdio.h>  //printf, scanf

int main(void) 
{
	//Dichiarazione di un array di 26 elementi char
	int tabpit[12][12];

    //Crezione della tabella pitagorica
    for(int riga=0; riga<12; riga++) {
		for(int col=0; col<12; col++) {
			tabpit[riga][col]=(riga+1)*(col+1);
		}
	}

	//Stampa a schermo dei valori di vet
	printf("\nStampa a schermo dei valori di vet[]\n");
    for(int riga=0; riga<12; riga++) {
		for(int col=0; col<12; col++) {
			printf("%d ", tabpit[riga][col]);
		}
		printf("\n");
	}
    printf("\n");

    return 0;
} 
