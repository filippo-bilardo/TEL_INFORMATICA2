#include <stdio.h> 

int main(void) 
{
    float media, sum1=0, sum2=0, t[5] = {1E0, 1E1, 1E2, 1E3, 1E4}; 
    double vet[10];

    printf("inserisci 10 numeri double: ");
    for(int i=0; i<5; i++) { 
      scanf("%lf", &vet[i]);
      sum1 += t[i];
      sum2 += vet[i];
      printf("vet[%d]=%f, sum2=%f\n",i, vet[i], sum2);
      printf("t[%d]=%f, sum1=%f\n",i, t[i], sum1);
    }
    printf("media2=%lf\n",sum2/5);
    printf("media1=%f\n",sum1/5);
}