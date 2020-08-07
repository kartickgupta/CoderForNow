//Swapping 2 numbers by using POINTER AS ARGUMENT TO A FUNCTION
#include<stdio.h>

int swap(int* pa,int *pb);
int main(void)
{
    int a=45;
    int b=100;
    swap(&a,&b);

}
int swap(int* pa, int *pb)
{
    *pa=*pa+ *pb;
    *pb=*pa-*pb;
    *pa=*pa-*pb;
    printf("New Values are a=%d, b=%d",*pa,*pb);
}

