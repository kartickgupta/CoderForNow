#include<stdio.h>
int matrix(int r, int c);

int main(void)
{
    int r,c;
     printf("Input Number of Rows and Columns \n");
     scanf("%d %d",&r,&c);
     matrix(r,c);
}
int matrix(int r, int c)
{
    int matrix[r][c],j,i;

     for (int i = 0; i <r; i++)
     {
        printf(" Input Row %d Values: \n",i+1);
        for (int j = 0; j < c; j++)
        {
            printf(" \n Input Column %d Value : ",j+1);
            scanf("%d",&matrix[i][j]);

        }
        
     }
     for (int i = 0; i <r; i++)
     {
        
        for (int j = 0; j <c; j++)
        {
          printf("%d  ",matrix[i][j]);
        }
        printf("\n");
     }

}
