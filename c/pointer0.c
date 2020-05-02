//To input pointer and print it's value and deferenced value 
#include<stdio.h>

int main(void)
{
    int v[3]={10,200,1000};
    int *pv;

    pv=v;

    for (int i = 0; i < 3; i++)
    {
        printf("Value of V = %d\n\n",*pv);
        printf("Value of pv = %p\n\n",pv); 
        pv++;
    }
    printf("Memory Allocation of Array always takes place in gap of size of datatype eg. in this case it's %ld ",sizeof(v[0]));

}