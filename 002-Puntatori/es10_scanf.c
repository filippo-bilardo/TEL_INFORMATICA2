
#include <stdio.h>	//printf

int main() {
    
    char msg[40];

    //printf("msg=%s\n", msg);

    
    printf("Inserisci i caratteri della stringa msg ");
    for(int i=0; i<4; i++) {
        scanf("%c", &msg[i]);
    }
    printf("msg=%s\n", msg);

    printf("Inserisci la stringa msg ");
    scanf("%s", msg);
    printf("msg=%s\n", msg);

    return 0;
}
