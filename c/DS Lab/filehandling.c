#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n = 10, s=13, m=13, i,j;
    char str[n][s];
    srand(time(0));

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < s ; j++)
        {
            str[i][j] = 'A' + rand()%m;
        }
        str[i][j] = '\0';
    }

    FILE *fl;
    fl = fopen("name.dat","w");
    for(i = 0;i<n;i++)
    {
        fputs(str[i],fl);
        fputs("\n",fl);
    }
    fclose(fl);
    return 0;    
}