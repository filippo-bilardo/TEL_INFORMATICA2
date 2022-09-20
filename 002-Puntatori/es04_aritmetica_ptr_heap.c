#include <stdio.h>

int main(void)
{
  int *ptr, a=0X1234, b=0X5678, c=0X9ABC;

  printf("int *ptr, a=0X1234, b=0X5678, c=0X9ABC;  \n");
  printf("&ptr=%X; ptr=%X \n",&ptr, ptr);
  printf("&a=%X; a=%X \n",&a, a);
  printf("&b=%X; b=%X \n",&b, b);
  printf("&c=%X; c=%X \n",&c, c);
  printf("\n");

  ptr=&a; printf("ptr=&a; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr++;  printf("ptr++;  ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr++;  printf("ptr++;  ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr+=2; printf("ptr+=2; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr+=9; printf("ptr+=9; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr=&a; printf("ptr=&a; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr--; printf("ptr--; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr--; printf("ptr--; ptr=%X, *ptr=%X\n",ptr, *ptr);
  ptr-=4; printf("ptr-=4; ptr=%X, *ptr=%X\n",ptr, *ptr);

  return 0;
}

