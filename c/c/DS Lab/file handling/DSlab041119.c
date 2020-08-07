#include<string.h>
#include<stdio.h>
int main(void)
{
 FILE *fp;
 char na[] = "We are IIIT";
 int i,l;
 fp = fopen("IIIT.txt","w");
 l = strlen(na);
 for(i =0 ; i<l ;i++)
 {
     fputc(na[i],fp);
 }
 printf("Reading from File \n");
 fclose(fp);

}