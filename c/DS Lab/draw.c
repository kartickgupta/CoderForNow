#include<stdio.h>
void gotoxy(int x,int y);

int main(void)
{   
    for (int x= 0; x<=100; x++)
    {
        gotoxy(x,0);
        printf("-");
    }
    gotoxy(25,0);
     for (int x= 0; x<=100; x++)
    {
        gotoxy(0,x);
        printf("-");
    }
    
    
}

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}