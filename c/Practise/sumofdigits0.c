#include<stdio.h>
int main(void)
{
    int sum=0,i, num,n;
    printf("Input NUmber :");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        n/=10;
    }
    printf("The Sum of Digits = %d \n",sum);
}