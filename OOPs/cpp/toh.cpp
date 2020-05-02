#include <iostream>

char toh(int n,char from, char temp, char to);
int main(void)
{   
    int n;
    char A,B,C;
    printf("Input the no. of discs: ");
    scanf("%d",&n);
    toh(n, A, B, C);

}

char toh(int n,char from, char temp, char to)
{
    if (n == 1 )
    {
        return printf("%c - %c",from, temp);
    }
    else
    {
        return toh(n-1, to , from, temp);
    }
}
