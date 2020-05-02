//sum of all int divisibly by 2 b/w 2 ints
#include<stdio.h>
int main(void)
{
    int a1,a2,sum=0,n;
    printf("Input 2 Nums :");
    scanf("%d%d",&a1,&a2);
    for (int i = a1+1; i <a2; i++)
    {
        n=i;
        if (n%2==0)
        {
            sum+=n;
        }
        
    }
    printf("The sum = %d",sum);
}