#include<stdio.h>
int main(void)
{
    int num,n,i,fact;
    printf("Input Number :");
    scanf("%d",&num);
    n=num;
    printf("Factorial of %d=",num);

    for (int i = 2; i <=num; i++)
    {
        if(n%i==0)
        {
            n=n/i;
            printf(" *%d",i);
        }
    }
    
}