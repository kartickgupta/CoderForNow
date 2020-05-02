#include<stdio.h>

int main(void)
{
    int num,n=0;
    printf("Input Number: ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            n++;
        }
        
    }
    
    if (n==2)
    {
        printf("The NUmber is Prime");
    }
    else
    {
        printf("The Number is Not Prime");
    }
    
}