#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack
{
    int data;
    struct stack* next;
        
};
struct  stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);
int peek(struct stack *);

int main(void)
{
    int value, option;
    do
    {
        printf("\n******MAIN MENU**************\n");
        printf("\n PUSH \n");
        printf("\n POP \n");
        printf("\n Dislpay \n");
        printf("\n Peek \n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Input Number PUSH");
            scanf("%d",&value);
            top = push(top,value);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            top = display(top);
            break;
        case 4:
           value = peek(top);
           if (value!=-1)
                printf("the top value is %d",value);
            else
            {
                printf("Stack is empty");
            }
        }


    
    } while (option != 5);
        return 0;   
}

struct stack *push(struct stack *top, int value)
{
    struct stack *ptr;
    ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr->data =value;
    if (top == NULL)
    {
        ptr->next = NULL;
        top =ptr;
    }
    else
    {
        ptr->next = top;
        top =ptr;
    }   
    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    if(top == NULL)
        printf("Stack is Underflow");
    else
    {
        ptr = top;
        top = top ->next;
        printf("Value is poped %d",ptr->data);
        free(ptr);
        
    }
    return top;
}
struct stack *display(struct stack *top)
{
    struct stack *ptr;
    ptr= top;
    if(top == NULL)
        printf("Stack is Empty");
    else
    {
        while (ptr!= NULL)
        {
            printf("\n %d \n",ptr->data);
            ptr = ptr->next;

        }
        
   }return top;
} 

int peek(struct stack *top)
{
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        return top->data;
    }
    
}
