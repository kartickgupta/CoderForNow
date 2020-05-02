//Program to take use returning value from a function

#include<stdio.h>
int z =5;

int mult(void);
int main(void)
 


 { 
         int a[2];

      printf("BEfore Function: \n");
    printf("Input in array : ");
    scanf("%d%d",&a[0],&a[1]);
    printf("%d\n\n\n",z);
    mult();
          printf("after Function: \n");

        printf("%d \n",z);
            printf("%d\t%d",a[0],a[1]);


}
int mult(void)
{
        int a[2];

      printf("IN Function: \n");

    scanf("%d",&z);
    printf("%d\n\n\n",z);
    printf("Input in array : ");
    scanf("%d%d",&a[0],&a[1]);
    printf("%d\t\t%d\n",a[0],a[1]);
}