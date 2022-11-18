/* str06_strlen.c - © FB - 08/12/20
 * Lunghezza di una stringa
 */
#include <stdio.h>   //printf
#include <string.h>  //strlen

int main(int argc, char *argv[]) {

  char str[30];
  //char* strcpy( char* dest, const char* src );
  strcpy(&str[0], "Ciao mondo"); 
  //strcpy(str, "Ciao mondo");  //https://en.cppreference.com/w/cpp/string/byte/strcpy
  printf("str[30]=%s\n", str);
  //la funzione strlen restituisce il numero di caratteri della stringa
  //escluso il carattere terminatore '\0'
  int len=strlen(str);
  printf("Il vettore str[30] contiene una stringa %d caratteri\n", len);
   
  return 0;
} 

