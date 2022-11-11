#include <stdio.h>

int main(void)
{
  int *ptr, a=0X1234, b=0X5678, c=0X9ABC;

  printf("int *ptr, a=0X1234, b=0X5678, c=0X9ABC;  \n");
  printf("&ptr=%X; ptr=%X \n",&ptr, ptr); //&ptr=BF261BB0; ptr=BF261CB0 
  printf("&a=%X; a=%X \n",&a, a);
  printf("&b=%X; b=%X \n",&b, b);
  printf("&c=%X; c=%X \n",&c, c);
  printf("\n");

  ptr=&a; printf("ptr=&a; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr=&a; ptr=BF261BA4, *ptr=1234
  ptr++;  printf("ptr++;  ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr++;  ptr=BF261BA8, *ptr=5678
  ptr++;  printf("ptr++;  ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr++;  ptr=BF261BAC, *ptr=9ABC
  ptr+=2; printf("ptr+=2; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr+=2; ptr=BF261BB4, *ptr=7FFE
  //ptr+=2000000; printf("ptr+=2000000"); //Segmentation fault.
  ptr+=9; printf("ptr+=9; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr+=9; ptr=BF261BD8, *ptr=BF261CB8
  ptr=&a; printf("ptr=&a; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr=&a; ptr=BF261BA4, *ptr=1234 
  ptr--; printf("ptr--; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr--; ptr=BF261BA0, *ptr=0
  ptr--; printf("ptr--; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr--; ptr=BF261B9C, *ptr=561F
  ptr-=4; printf("ptr-=4; ptr=%X, *ptr=%X\n",ptr, *ptr); //ptr-=4; ptr=BF261B8C, *ptr=561F

  return 0;
}

