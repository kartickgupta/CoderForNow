#include<stdio.h>

int main(void)
{
    int range,a=0,b=1,c;
    printf("Input no of outputs: ");
    scanf("%d",&range);
    printf("%d\n%d\n",a,b);

    for (int i = 0; i <=range-2; i++)
    {
        c=a+b;
        printf("%d \n",c);
        a=b;
        b=c;
    }
    
}