#include<stdio.h>
#include<time.h>

int bubble(void);

int main()
{

    clock_t start,end;
    double tc;
    start = clock();
    bubble();
    end = clock();
    tc = end - start;
    printf("\nThe time complexity of bubble sort is :%lf",tc);
}


int bubble(void)
{
    int arr[1000] ,n, c, d, swap;

    printf("Input the number of elements you want = ");
    scanf("%d",&n);
   // printf("Input all numbers : \n");

    for (int i = n; i >= 0; i--)
    {
        arr[n-i] = i;
    }

    int count = 1;
    for (int i = 0; i <= n-1 ; i++)
    {
        for (int d = 0; d <= n -1-i; d++)
        {
            if (arr[d] > arr[d+1])
            {
                printf("Step [%d]: ", count);
                swap = arr[d];
                arr[d] = arr[d+1];
                arr[d+1] = swap;
                count++;

                for (int j = 0; j<= n; j++)
                {
                    printf("%d\t",arr[j]);
                }
                printf("\n");

            }
        }

    }

    for (int i = 0; i<= n; i++)
    {
        printf("%d\t",arr[i]);
    }

}
