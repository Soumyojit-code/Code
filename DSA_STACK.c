//push pop operation in stack
#include<stdio.h>
#include<stdlib.h>
#define size 5
int pop();
int push();
int display();
int stack[size],top=-1;
int main(){
    int ch;
    do{

        printf("ENTER YOUR CHOICE(1:PUSH 2:POP 3:DISPLAY)");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            default:printf("ENTER VALID OPTION");
        }
    }while(ch!=0);
}
int push()
{
    int x;
    if(top==(size-1))
    {
        printf("THE STACK IS FULL\n");
    }
    else
    {
        printf("ENTER THE ELEMENT TO ADD IN STACK: \n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("THE STACK IS EMPTY\n");
    }
    else
    {
        top--;
    }
}
int display()
{
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}
