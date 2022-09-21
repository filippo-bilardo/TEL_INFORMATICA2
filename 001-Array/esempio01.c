#include <stdio.h> //printf
#include <string.h> 

     
int main(int argc, char **argv) 
{

  // Stampa del Codice Ascii sia come numeri
  // interi che come caratteri ascii
  int i=0;
  for(i=32; i<=127; i++) 
  {
    printf("\nAscii code[%d], %x=%c", i,i,i);
  }
  printf("\n");
  printf("\n");  
  
  return 0;
} 
 
 