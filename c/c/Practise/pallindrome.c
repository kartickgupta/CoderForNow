#include<stdio.h>
int main(void)
{
    int num,n,num1=0,i;
    printf("Input NUmber :");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        i=n%10;
        num1=num1*10 + i;
        n/=10;
    }
    printf("The Reverse of Digits = %d \n",num1);

    if(num==num1)
    {
        printf("%d is Pallindrome",num);
    }
    else
    {
        printf("%d is not a Pallindrome",num);

    }
    
}