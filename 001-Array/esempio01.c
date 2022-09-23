#include <stdio.h>  //printf (https://www.computerhope.com/unix/uprintf.htm)
     
int main(int argc, char **argv) 
{
  // Stampa del Codice Ascii sia come numeri
  // interi che come caratteri ascii
  printf("\nStampa del Codice Ascii\n");
  for(int i=32; i<=127; i++) 
  {
    printf("\tAscii code[%d], %x=%c\n", i, i, i);
  }
  printf("\n");
  printf("\n");  
  
  return 0;
} 
 
 