#include <stdio.h>

int main(void)
{
    int a[5] = {1,4,5,7,8};
    printf("The Value stored is = %d \n",a[4]);
    printf("The Pointer Address is %p \n",&a[4]);
    printf("The Pointer Address is %p \n",a+4);
    printf("The value stored is = %d \n",*(a+4));
    printf("The Size of array is = %lu",sizeof(a[0]));
}