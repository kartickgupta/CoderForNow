#include<stdio.h>
int swap(int *a,int *b);

int main(void)
{
    int x=0,y=7;
    printf("value of x: %d and value of y: %d",x,y);
    swap(&x,&y);
    printf("value of x: %d and value of y: %d",x,y);

}
int swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b= temp;
}