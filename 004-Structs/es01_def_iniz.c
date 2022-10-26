#include <stdio.h>
#include <string.h>

// Create a structure
struct indirizzo { 
  char citta[128]; 
  char via[128]; 
  int civico; 
};

#define REC_IND3 3  //Numero di record della tabella ind3

int main() {
  // Creiamo la variabile strutture e assegnamo dei valori
  struct indirizzo ind1 = {"Arese", "via Matteotti", 12};
  // Solo dicharazione
  struct indirizzo ind2;
  struct indirizzo ind3[REC_IND3]; //ind3 è una tabella, ogni elem. è un record

  //ind2.citta = "Arese"; //error: assignment to expression with array type
  //ind2.via = "via Milano"; //error: assignment to expression with array type
  //ind2.citta = ind1.citta; //error: assignment to expression with array type
  strcpy(ind2.citta, ind1.citta);
  strcpy(ind2.via, "via Milano");
  ind2.civico = 57;

  //per i campi stringa siamo obbligati ad usare la strcpy
  strcpy(ind3[0].citta, "Bollate");
  strcpy(ind3[0].via, "via Monza");
  ind3[0].civico = ind1.civico;

  //Stampiamo il contenuto dei record
  printf("Citta: %s - %s, %d\n", ind1.citta, ind1.via, ind1.civico);
  printf("Citta: %s - %s, %d\n", ind2.citta, ind2.via, ind2.civico);
  for(int i=0; i<REC_IND3; i++) {
    printf("Citta: %s - %s, %d\n", ind3[i].citta, ind3[i].via, ind3[i].civico);
  }

  return 0;
}
