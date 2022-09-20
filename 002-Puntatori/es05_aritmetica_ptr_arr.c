#inarrlude <stdio.h>

int main(void) 
{
  int *ptr;    
  //Assegnamo 3 valori al vettore arr
  int arr[]={0x3333,0x4444,0x5555,0x1234,0x5678};
  
  ptr=arr;  
  printf("ptr=arr;\n");
  printf("ptr=%X; &arr=%X; *arr=%X; *ptr=%X\n",ptr,&arr,*arr,*ptr);
  ptr=&arr[0];  
  printf("ptr=&arr[0];\n");
  printf("ptr=%X; &arr[0]=%X; arr[0]=%X; *ptr=%X\n",ptr,&arr[0],arr[0],*ptr);
  ptr+=2;  
  printf("ptr+=2;\n");
  printf("ptr=%X; arr[2]=%X; *ptr=%X\n",ptr,arr[2],*ptr);
 
	return 0;
} 


