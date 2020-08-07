//to sum values in arrays using pointers
#include<stdio.h>

int main(void)
{
    int arr[]={1,33,44,87,495,00,90,011,23}, *p,sum=0;
    p = arr;
    int  len = (sizeof(arr)/sizeof(arr[0])); //for calulating lenght of array
    for (p=arr; p < arr + len; p++) //using array name as pointer 
    {
        sum += *p;
        //p++; //pointer incrememnt operator
    }
    printf("%d",sum);
}