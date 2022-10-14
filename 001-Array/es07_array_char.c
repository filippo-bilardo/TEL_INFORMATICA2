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
	char vet[26];

    //il codice ascii di 'a' è 97 quindi
    for(int i=0; i<26; i++) {
        vet[i]=97+i;
	}

	//Stampa a schermo dei valori di vet
	printf("\nStampa a schermo dei valori di vet[]\n");
	//scorriamo con i tutti gli elementi del vettore
	for(int i=26; i>0; i--) {
		printf("vet[%d]= %c\n", i, vet[i]);
	}
    printf("\n");

	//stampare solo gli elementi dell'array che 
	//costituiscono la parola "ciao"
	printf("\nStampa a schermo elementi 'ciao' di vet[]\n");
	//scorriamo con i tutti gli elementi del vettore
    for(int i=0; i<26; i++) {
		if(vet[i]=='c' || vet[i]=='i' || vet[i]=='a' || vet[i]=='o') {
			printf("vet[%d]= %c\n", i, vet[i]);
		}
	}
    printf("\n");

    return 0;
} 
