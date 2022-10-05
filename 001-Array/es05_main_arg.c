/**
 * gcc es05_main_arg.c  
 * ./a.out 2 rw "ciao mondo" uno  
 
  Numero di argomenti passati, argc=5
  Elenco di argomenti passati
  argv[0]:=./a.out
  argv[1]:=2
  argv[2]:=rw
  argv[3]:=ciao mondo
  argv[4]:=uno

 */
#include <stdio.h> //printf
#include <string.h> 
 
int main(int argc, char **argv) 
//int main(int argc, char *argv[]) 
{
  //argc = numero di argomenti
  printf("Numero di argomenti passati, argc=%d\n", argc);
  
  //argv = vettore di stringhe. Argomenti passati al main
  printf("Elenco di argomenti passati\n");
  for(int i=0;i < argc;++i) {
    printf("argv[%d]:=%s\n", i, argv[i]);
  }
  
  return 0;
} 
 
 