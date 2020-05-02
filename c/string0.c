//Program to input string and print vertically
//And calculate string length
//Data Type Conversions
#include<stdio.h>
#include<string.h>

int main(void)
{   
 
    char name[50];
    scanf("%s",name);
    for (int i = 0; i <strlen(name); i++)
    {
      printf("%c \n",name[i]);
    }
    int n=strlen(name); //STRLEN- string length
    printf("%d \n\n\n",n);
    
    
    
    
    //Alternative for strlen, this is how it works
    while (name[n] != '\0')
    {
      n++;
    }
    printf("%d",n);
}
