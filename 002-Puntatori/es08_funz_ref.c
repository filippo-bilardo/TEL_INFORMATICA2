
#include <stdio.h>	//printf

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char **argv) {
    int a=10, b=20;
    printf("a=%d, b=%d\n", a, b);
    swap (&a, &b);
    printf("a=%d, b=%d\n", a, b);
}  