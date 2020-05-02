#include<stdio.h> 
#include<stdlib.h>
#include<time.h> 

int random_num(int x,int range); //Prototyping Function

 int main(void)
 {
    int range,x;
    printf("How many Number You Want to print= ");
    scanf("%d",&x);
    printf("Input Range= ");
    scanf("%d",&range);
    random_num(x,range);
 } 

int random_num (int x,int range) 
{ 
    int i,num[x],vari,count[range],j=0,k=range;

    srand(time(NULL)); //For initalizing randomization.

    for(i = 0; i <x; i++)
    {
       vari=rand()%(range+1); //To produce Random Numbers in Required Range      
        num[i]=vari;
        printf("%d  ",num[i]); //Print OUTPUT
    }
    
    for (i = 0; i <x; i++)
    {
        if(num[i]>j)
        {
            j=num[i];
        }
        if (num[i]<k)
        {
          k=num[i];
        }
        
    }
    printf("Highest Number is= %d \n",j);
    printf("Lowest Number is= %d \n",k);
    j=0;
    
    for (i = 0; i <range+1; i++) //To Remove Garbage Value
    {
        count[i]=0;
    }
            
    
    for (i = 0; i <x; i++) //For Counting Frequency using a table form
    {
        count[num[i]]++;
    }
    
   for ( i = 0; i <range+1; i++) //To print Frequency
    {
        if (count[i]!=0)
        {
         printf("%d is Repeated %d times \n",i,count[i]); 
        }
         if (count[i]>j) //For maximum frequency
        {
            j=count[i];
        }
    }
    
    printf("Highest Frquency =%d",j); //To print Highest Freqeuncy
}

