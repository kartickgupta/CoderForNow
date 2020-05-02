//To display String alphabets with their ascii codes 
//DATA TYPE COVERSIONS
#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[50];
    printf("Input name: ");
    scanf("%s",name);

    for (int i = 0; i<=strlen(name); i++)
    {
     // int c= (int)name[i];
      printf("%c%d\n",name[i],name[i]);
    }
    
}

