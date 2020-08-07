#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{    
   int r[20],i;
   srand(time(NULL));
  
   for (i = 0; i < 20; i++)
    {   
        r[20] = rand();
        printf("%d \n",r[i]);
    }
    
}