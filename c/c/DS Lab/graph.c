#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//ALWAYS Mention math.h Librabry while compiling -lm
int main(void)
{   
    int x;
    double y;
    printf("X   |   Y \n");
    printf("----------");

    for(x = 0; x<=90; x++)
    {
        y=100*sin(x*(3.14/180));
        printf("%d  |   %lf \n",x,y);
    
    }
    

}