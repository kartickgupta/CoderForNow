#include<stdio.h>

int main(void)
{
    int year,n;
    printf("Input Year: ");
    scanf("%d",&year);

    if (year%4==0)
    {
        if (year%100!=0)
        {
            printf("It's a Leap Year \n");
        }
    }    
    else if (year%400==0)
    {
        
        printf("It's a Leap Year \n");
        
    }
    else
    {
        printf("It's not aleap year \n");
    }
            
        
        
    
    
}