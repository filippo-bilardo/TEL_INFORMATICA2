#include <stdio.h>	//printf

void area_triangolo(int b, int h, int *a); //Prototipo della funzione int 
void area_rect(int b, int h, int *a); //Prototipo della funzione int 

int main(int argc, char **argv) {
  
  int base=10, alt=5, area=0;
  
  area_triangolo(base, alt, &area);
  printf("area=%d \n", area);
  area_rect(base, alt, &area);
  printf("area=%d \n", area);
  
  area_triangolo2(base, alt, area);
  
  return 0;
}  

void area_triangolo(int b, int h, int *a) {
  *a = b*h/2;
}
void area_rect(int b, int h, int *a) {
  *a = b*h;
}

void area_triangolo2(int b, int h, int a) {
  a = b*h/2;
  printf("area_triangolo2=%d \n", a);
}
