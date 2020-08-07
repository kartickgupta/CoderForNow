#include<stdio.h>
 int main(void)
 {
     int num,n=1;
     printf("Input the Number: ");
     scanf("%d",&num);

     for (int i = num; i >=1; i--)
     {
         n=n*i;
         printf("*%d",i);
     }
        printf("%d! = %d \n",num,n);
 }