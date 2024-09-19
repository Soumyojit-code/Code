// find the minimum element in a stack. 
#include<stdio.h>
#include<stdlib.h>
#define size 5
static int top=-1;
static int stack[size] ;
int main()
{
    int ch=1;
    do
    {
        printf("ENTER 1:PUSh,2:POP,3:DISPLAY\n");
        printf("ENTER YOUR CHOICE \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: dis();
                break;
            default:printf("PLEASE TRY AGAIN");
        }
    }while(ch!=0);
}
int pop()
{
    if(top==-1)
    {
        printf("the stack is empty\n");

    }
    else
    {
        top--;
    }
}
int push()
{
    float x;
    if(top==size)
    {
        printf("THE STACK IS FULL\n");
    }
    else
    {
        printf("ENTER ELEMET TO ADD IN STAK\n");
        scanf("%f", &x);
        top++;
        stack[top]=x;
    }
}
int dis()
{
    int i=0,smal=stack[i];
    printf("your stack is\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
    for(i=1;i<=top;i++)
    {
        if(smal>stack[i])
        {
            smal=stack[i];
        }
    }
    printf("Minimum element: %d\n",smal);
    smal=stack[0];
}
