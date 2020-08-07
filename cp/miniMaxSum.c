#include<stdio.h>

int main(void)
{
    
}

int miniMaxSum()
{   
    int arr[4];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0; i<5;i++)
    {
        if(temp>=arr[i])
            temp = arr[i];
    }
}