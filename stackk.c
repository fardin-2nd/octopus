#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
    if(top==size-1)
    {
        printf("stack is full(overflow)\n");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("pushed %d onto the stack.\n",value);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty(underflow)\n");
    }
    else
    {
        printf("poped %d from the stack.\n",top);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty(underflow)\n");
    }
    else
    {
        printf("stack element: ");
        for(int i=top;i>=0;i--)
            printf("%d  ",stack[i]);
        printf("\n");
    }
}
void peek()
{

     printf("top index is %d \n",top);
     printf("top value is %d \n",stack[top]);

}
int main()
{
   push(50);
   push(40);
    push(30);
push(20);
push(10);
peek();
display();
push(60);
pop();
display();
pop();
pop();
pop();
pop();
display();
pop;
peek();
return 0;
}
