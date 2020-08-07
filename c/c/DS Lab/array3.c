//MATRIX ADDITION
#include<stdio.h>
int matrix(int r, int c, int x,int y);

int main(void)
{
    int r,c,x,y;
     printf("Input Number of Rows and Columns for Matrix 1: \n");
     scanf("%d %d",&r,&c);
  
     printf("Input Number of Rows and Columns for Matrix 2: \n");
     scanf("%d %d",&x,&y);

        matrix(r,c,x,y);
     
}
int matrix(int r, int c,int x, int y)
{
    int matrix1[r+100][c+100],j,i,matrix2[x][y],matrix3[100][100],g=r,h=c;

     for (int i = 0; i <r; i++)
     {
        printf(" Input Row %d Values: \n",i+1);
        for (int j = 0; j < c; j++)
        {
            printf(" Input (%d,%d): \n",i+1,j+1);
            scanf("%d",&matrix1[i][j]);

        }
        
     }
      

     for (int i = 0; i <x; i++)
     {
        printf(" \n Input Column %d Value : ",i+1);
        for (int j = 0; j < y; j++)
        {
            printf(" Input (%d,%d): \n",i+1,j+1);
            scanf("%d",&matrix2[i][j]);

        }
        
     }
     printf("\n MATRIX 1: \n");
     for (int i = 0; i <r; i++) //For printing Matrix 1
     {
        
        for (int j = 0; j <c; j++)
        {
          printf("%d  ",matrix1[i][j]);
        }
        printf("\n");
     }
          printf("\n MATRIX 2: \n");

     for (int i = 0; i <x; i++)//For printing Matrix 2
     {
        
        for (int j = 0; j <y; j++)
        {
          printf("%d  ",matrix2[i][j]);
        }
        printf("\n");
     }
     if (x>r)
     {
         g=x;
     }
     else if (y>c)
     {
         h=y;
     }
     
     printf("\n\n Matrix 3: \n");
        //FOR MATRIX ADDITION
    for ( i = 0; i < g; i++)
    {
        for(j=0; j<h;j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d  ",matrix3[i][j]);
        }   
      printf("\n");

        
    
    } 
    


}
