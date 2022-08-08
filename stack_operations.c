#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[5]={66,78,99,50};
int top=-1;
void push ()
{
    int x;
    if (top==MAX-1)
    {
        printf("stack overflow");
    }
    else 
    {
        printf("enter the elemnt to push in the stack\n");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else 
    {
        printf("poped stack element is %d\n",stack[top]);
        top=top-1;
    }
}
void display ()
{
    int i;
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\nStack is........\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t\n",stack[i]);
        }
    }
}
int main()
{
    /*int ch;
    do
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: 
                exit(0);
            default: printf("\nWrong Choice!!");
        }
    }*/
    int ch;
    while(1) //infinite loop, will end when choice will be 4
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nWrong Choice!!");
        }
    }
    return 0;
}