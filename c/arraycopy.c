#include<stdio.h>
#include<string.h>
int copy(char* name[],int n);


int main(void)
{
  char name1[]="Kartick Gupta";
  int n= strlen(name1);
  copy(name1[n],n);
  }

int copy(char* name[],int n)
{
    char name2[n];

    for ( int i = 0; i < n; i++)
    {
         name2[i]=name[i];
    }
    
   printf(name2);
}