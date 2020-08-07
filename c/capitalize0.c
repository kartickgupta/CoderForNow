#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[50];
    printf("Input name: ");
    scanf("%s",name);

    for (int i = 0; i<=strlen(name); i++)
    {
        if (name[i]>='a' && name[i]<='z')
        {
            printf("%c",name[i]-('a'-'A'));
        }
        else
        {
            printf("%c",name[i]);
        }
        
    }
    
}

