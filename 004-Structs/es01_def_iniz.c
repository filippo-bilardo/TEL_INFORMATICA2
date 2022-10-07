#include <stdio.h>
#include <string.h>

// Create a structure
struct indirizzo { 
  char citta[128]; 
  char via[128]; 
  int civico; 
};

int main() {
  // Creiamo la variabile strutture e assegnamo dei valori
  struct myStructure ind1 = {13, 'B', "Some text"};
  // Solo dicharazione
  struct myStructure ind2;

  ind2 = {13, 'B', "Some text"};

  s2=s1;
  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);
  
  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");
  s2=s1;
  s2.myNum = 32;

  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

  return 0;
}
