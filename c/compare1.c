#include<stdio.h>
#include<string.h>

int main(void)
{
    char *string1[50], *string2[50];
    printf("Input Names: ");
    scanf("%s%s",*string1,*string2);

    if (string1 == string2)
    {
        printf("Same");
    }
    else
    {
        printf("DIff");
    }
    

/*
    if (strcmp(string1,string2)==0)//compares string
    {
        printf("Same");        
    }
    else
    {
        printf("Differnt");
    }*/
    

}