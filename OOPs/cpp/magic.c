#include <stdio.h>

int main(void)
{
    int size,i,j, l, sum;
    printf("Input size of Square: ");
    scanf("%d",&size);

    int magic[size][size], check[size];
    if (size%2 == 0)
    {
        printf("The Number is even Thus the program cannot run ");
        return 1;

    }
    for (i = 0; i<size ; i++)
    {
        for (j = 0; j <size ; j++)
        magic[i][j] = 0;

    }

    magic[0][(size-1)/2] = 0;
    int key = 1;
    i =0; j = (size-1)/2;

    while(key < size *size)
    {  
        int k = (size +i -1) % size;
        l = (size + j -1 )% size;

        if (magic[k][l]!= 0)
        {
            i =(i+1)%size;
        }
        else
        {
            i =k;
            j = l;
        }
        
        magic[i][j] = key;
        key++;

    }
    for (i = 0; i<size ; i++)
    {
        for (j = 0; j <size ; j++)
            {
                printf("%d ",magic[i][j]);
            }
            printf("\n");
    }

   for(int i = 0; i< size; i++)
    {   
        sum =0;
        for(int j =0; j < size; j++)
        {
            sum+= magic[i][j];
        }
                        
    }
    if(sum == ((size)*(size*size +1))/2)
        {
            printf("Magic Square is Correct \n");
        }
}