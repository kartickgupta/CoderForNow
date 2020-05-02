#include<stdio.h> 
#include<stdlib.h>
#include<time.h> 
  
// Driver program 
int main(void) 
{ 
    int i,range=10,num[30000],vari,count[10000],y,j;

    srand(time(NULL));

    for(i = 0; i <30; i++)
    {
       vari=rand()%range+1;       
        num[i]=vari;
        printf("%d \n",num[i]);
    }
    
    for (i = 0; i <range; i++)
    {
        count[i]=0;
    }
    
    
    
    
    for (i = 0; i < 30; i++)
    {
        y=num[i];
        /*for (j = 0; j < 30; j++)
        {
            if (y==num[j])
            {
                count[num[j]]++;    
            }
        }*/
        count[y]++;
    }
    
   for ( i = 0; i <11; i++)
    {
                printf("%d is Repeated %d times \n",i,count[i]);

    }
    

} 