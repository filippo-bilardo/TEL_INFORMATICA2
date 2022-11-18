/* str07_strcpy.c - © FB - 08/12/20
 * Copia di una stringa
 */
#include <stdio.h>   //printf
#include <string.h>  //strcpy

int main(int argc, char *argv[]) {

    char stringa[]="Ciao";
    char *ptrstr;
    ptrstr = "Mondo!";
    //int puts(const char *str); https://en.cppreference.com/w/c/io/puts
    puts(stringa);
    puts(ptrstr);
    puts("Come va?");

  return 0;
} 

