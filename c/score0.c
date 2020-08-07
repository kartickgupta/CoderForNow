#include<stdio.h>
//Used for Graphical Representation of Students' Marks

int COUNT;
void score(int i);
void main(void)
{
    printf("Number of Students");
    scanf("%d",&COUNT);
    score(COUNT);
}







void score(int i)
{   //input marks
    int score[COUNT];
    for(int i=0;i< COUNT;i++)
        {
            printf("Student %d: ",i+1);
            scanf("%d",&score[i]);
       }

    //output results
    for (int i = 0; i <COUNT; i++)
    {
        printf("Student %d",i+1);
        for (int t = 1; t<=score[i]; t++)

        {
            printf("#");
        }
        printf("\n");
    }
    
}
