#include<stdio.h> 

int main(void) 
{ 
    double values[5] = { 1.5, 2.5, 3.5, 4.5, 5.5 }; 
    //sizeof restituisce la dimensione in byte di un variabile
    size_t element_count = sizeof(values)/sizeof(values[0]); 

    printf("Il vettore values[5] occupa %zu bytes in memoria\n", sizeof(values)); 
    printf("Un singolo elemento del vettore (es. values[2]) occupa %zu bytes\n", sizeof(values[2])); 
    printf("Il numero di elementi del vettore values[5] è %zu\n", element_count); 

    return 0; 
} 