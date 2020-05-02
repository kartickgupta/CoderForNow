#include<stdio.h>
#include<stdlib.h>
 int main(void)
 {
     int i=1;
     unsigned int a,b,sum=0;
     
     while (i!=0)
     {  a=0;
     b=0;
        printf("Input 2 Numbers :\n");
        scanf("%u %u",&a,&b);
        sum=a+b;
        if ((a>32767 || a<-32786) ||(b>32767 || b<-32786)||(sum>32767 || sum<-32786))
        {
            printf("The Given Values are out of Range of Integers \n");
            i=0;
        }
        else
        {
            printf("Sum = %u \n",sum);
        }
     }   
     
 }