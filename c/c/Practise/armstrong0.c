#include<stdio.h>
#include<math.h>

int main(void)
{
    int num,n,i,sum=0;
    printf("Input Number: ");
    scanf("%d",&num);
    n=num;
    while (n>0)
    {
        i=n%10;
        sum+=i*i*i;
        n/=10;

    }
    
    if(sum==num)
    {
        printf("The NUmber is Armstrong Number");
    
    }
    else
    {
        printf("Not a Armstrong Number");
    }
       
}