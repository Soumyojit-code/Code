// calculate the average value of the stack elements. 
#include<stdio.h>
#include<stdlib.h>
#define size 5
static int top=-1;
static float stack[size] ;
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
    float avg=0,sum=0,c=0;
    printf("your stack is\n");
    for(int i=0;i<=top;i++)
    {
        printf("%2.0f\n",stack[i]);
        sum=sum+stack[i];
        c++;
    }
    avg=sum/c;
    printf(" the average value of the stack elements=%0.2f\n",avg);
    sum=0;
}
