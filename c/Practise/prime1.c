//TO Print all Prime Numbers upto a given Number
#include<stdio.h>

int main(void)
{
    int num,n=0,j;
    printf("Input Number: ");
    scanf("%d",&num);

    for (int j = 1; j<=num; j++)
    {
           
        n=0;
        for (int i = 1; i <=j; i++)
        {
            if (j%i==0)
            {
                n++;
            }
            
        }
        
        if (n==2)
        {
            printf("%d is Prime: \n",j);
        }
        
    }  
}