
#include <stdio.h>	//printf

int main() {
    
    char msg[40];

    printf("Inserisci la stringa msg ");
    scanf("%[^\n]", msg);
    printf("msg=%s\n", msg);

    return 0;
}
