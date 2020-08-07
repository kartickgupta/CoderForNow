#include<stdio.h>
int main(void)
{
    int n = 0,m =0,c =0;
    scanf("%d",&n);
    scanf("%d",&m);

    while (m!= n)
    {
        if (m >n)
        {
            m = m-n;
        }

        else
        {
             n = n - m;
        }
        printf("%d  %d\n",n,m);
        c ++;

    }
    printf ("\nTotal Iteration = %d\n",c);
}
