// C program for linked list implementation of st 
#include <stdio.h> 
#include <stdlib.h> 
#include<malloc.h>

struct StackNode { 
	int data; 
	struct StackNode* next; 
}; 

struct StackNode *top = NULL;
struct StackNode *push(struct StackNode *,int);
struct StackNode *display(struct StackNode *);
struct StackNode *pop(struct StackNode *);
int peek(struct StackNode *);

int main(int arg, char* argv[])
{
    int value, option;
    do
    {
        printf("       Main Menu  \n   ");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. PEEK \n");
        printf("4. DISLPAY \n");
        printf("5. EXIT\n");
        printf("Enter YOur Option \n");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("Input value to be pushed on stack");
            scanf("%d",&value);
            top = push(top, value);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            value = peek(top);
            if (value !=-1)
            printf("\n The Top Value is %d \n", value);
            else
            printf("\n Stack is Empty", value);                       
            break;
        case 4:
            top = display(top);
            break;
        }
    }
    while (option !=5);
    return 0;
}
    struct StackNode *push(struct StackNode *top, int value)
    {
     struct  StackNode *ptr;
     ptr = (struct StackNode*)malloc(sizeof(struct StackNode));
     ptr ->data = value;
     if(top == NULL)
     {
        ptr -> next = NULL;
        top = ptr;
     }
     else
     {
         ptr -> next =top;
         top =ptr;
     }
     return top;       
    }
    
         
    struct StackNode *display(struct StackNode *top)
    {
        struct StackNode *ptr;
        ptr = top;
        if (top == NULL)
        printf("\n Stack is Empty \n");
        else
        {
            while (ptr != NULL)
            {
                printf(" \n %d \n",ptr ->data);
                ptr = ptr -> next;
            }            
        }
        return top; 
    }
    struct StackNode *pop(struct StackNode *top)
    {
        struct StackNode *ptr;
        ptr = top;
        if (top == NULL)
        printf("\n Stack is Underflow \n");
        else
        {
            top = top -> next;
            printf("\nValue is Deleted from Stack\n");
            free(ptr);
        }        
        return top; 
    }
    int peek(struct StackNode *top){

        if (top == NULL)
        return -1;
        else
        return top -> data;
    }
      
 



