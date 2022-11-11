
#include <stdio.h>	//printf

void split_time(long int tot_sec, int *h, int *m, int *s);
int *smallest(int a[], int n);

int main(int argc, char **argv) {
    int h,m,s;
    int time=3665;

    split_time(time, int *h, int *m, int *s);
    printf("time=%d -> %02d:%02d:%02d \n", time, h, m, s);
}  

