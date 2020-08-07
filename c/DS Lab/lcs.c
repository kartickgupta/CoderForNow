#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int lcs (char *x, char *y, int m, int n);

int main()
{
    char x[50],y[50];
    scanf("%s",x);
    scanf("%s",y);
    int m = strlen(x);
    int n = strlen(y);
    printf("LCS is %d ",lcs(x,y,m,n));
    return 0;
}
int lcs (char *x, char *y, int m, int n)
{
    int l[m+1][n+1],i,j;
    for(i=0;i<m;i++)
    {
        for (int j= 0; j< n; j++)
        {
            if (i == 0|| j==0)
            l[i][j] = 0;
        
            else if (x[i-1] == y[j-1])
            
                l[i][j] = l[i-1][j-1]+1;
            else
            {
                 l[i][j] = (l[i][j-1]>l[i-1][j])?l[i][j-1]:l[i-1][j];
            }   
    }
    return l[m][n];
}
