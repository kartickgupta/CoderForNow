#include<stdio.h>
#include<string.h>
int is_it_subsequence(char* str,char* substr)
{
 int la=strlen(substr);
 int j,k;
 for(j=0;j!=la;j++)
 {
 for(k=0;k<strlen(str);k++)
 {
 if(substr[j]==str[k])
 {
 j++;
 }
 }
 if(j==strlen(substr))
 {
 return 1;
 }
 return -1;
 }
return -1;
}
int main()
{
 char str1[20];
 printf("Enter the main string 1\n");
 scanf("%s",str1);
 char str2[20];
 printf("\nEnter the main string 2\n");
 scanf("%s",str2);
 int n1,n2; //for knowing no of substring we will take
 printf("\nEnter the no. of substrings you want to take in str1\n");
 scanf("%d",&n1);
 char substr1[n1][20];
 printf("\nEnter the no. of substrings you want to take in str2\n");
 scanf("%d",&n2);
 char substr2[n2][20];
 int i,j=0;
 printf("\nenter the substrings for string 1\n");
 for(i=0;i<n1;i++)
 {
 scanf("%s",substr1[i]);
 }
 printf("\nenter the substrings for string 2\n");
 for(i=0;i<n2;i++)
 {
 scanf("%s",substr2[i]);
 }
 char subsequence1[n1][20];
 for(i=0;i<n1;i++)
 {
 if(is_it_subsequence(str1,substr1[i])==1)
 {
 strcpy(subsequence1[j],substr1[i]);
 j++;
 }
 }
 printf("\nSubsequence of string 1 are\n");
 int length1,length2;
 printf("\n");
 for(i=0;i<j;i++)
 {
 printf("%s\n",subsequence1[i]);
 }
 length1=j;
 j=0;
 char subsequence2[n2][20];
 for(i=0;i<n2;i++)
 {
 if(is_it_subsequence(str2,substr2[i])==1)
 {
 strcpy(subsequence2[j],substr2[i]);
 j++;
 }
 }
 length2=j;
 printf("\n");
 printf("\nSubsequence of string 2 are\n");
 for(i=0;i<j;i++)
 {
 printf("%s\n",subsequence2[i]);
 }
 int max;
 if(length1>length2)
 max=length1;
 else
 max=length2;
 char common_subsequence[max][20];
 int count3[max];
 int t=0;
 for(int i=0;i<length1;i++)
 {
 for(int j=0;j<length2;j++)
 {
 if(strcmp(subsequence1[i],subsequence2[j])==0)
 {
 strcpy(common_subsequence[t],subsequence2[j]);
 count3[t]=strlen(common_subsequence[t]);
 t++;
 }
 }
 }
 printf("\n");
 int k;
 printf("\nCommon subsequence of both the main strings combined are\n");
 for(k=0;k<t;k++)
 {
 printf("%s\n",common_subsequence[k]);
 }
 int max2=0;
 int p;
 int h;
 for( p=0;p<t;p++)
 {
 if(count3[p]>max2)
 {
 max2=count3[p];
 h=p;
 }
 }
 printf("\n longest common subsequence from common subsequences is");
 printf("\n %s\n ",common_subsequence[h]);
 printf("length of longest common subsequence is :%d",count3[h]);
 return 0;
}