//Program to Chech Possibility of Triangle on the basis of input side lenghts
#include<stdio.h>

int valid_triangle(int a,int b,int c);
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int z=valid_triangle(a,b,c);
    if (z==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}
int valid_triangle(int a,int b,int c)
{
    if (a+b<c || b+c<a || c+a<b)
    {
        return 0;
    }
    else if (a<0|| b<0|| c<0)
    {
        return 0;
    }
    else
    {
            return 1;

    }
    
    
}