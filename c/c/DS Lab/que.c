
#include<stdio.h>
#include<stdlib.h>
int main()
{
 struct node
 {
 int data;
 struct node *next;
 };
 int count=0,x=1,i;
 struct node *t;
 struct node *next;
 struct node *first;
 struct node *start=NULL;
 while(x!=0)
 {
 printf("Enter element (0 to exit): ");
 scanf("%d",&x);
 count++;
 t=(struct node *) malloc(sizeof(struct node *));
 if(start==NULL)
 {
 start=t;
 start->data=x;
 start->next=NULL;
 first=start;
 }
 else
 {
 t->data=x;
 start->next=t;
 t->next=NULL;
 start=t;
 }
 }
for(i=0;i<count;i++)
{
 printf("%d\n",first->data);
 first=first->next;
}
return 0;
}
