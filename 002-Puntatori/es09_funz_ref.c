
#include <stdio.h>	//printf

int modificaUltimo(int a[] , int size);

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    modificaUltimo (a, 5) ;
    printf("%d\n ", a[4]); /* stampa 10 */
}

int modificaUltimo(int a[] , int size) {
    a[size-1] = a[size-1]+5;
}