#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 6

int queue[N];
int front =0;
int rear=-1;
int item=0;

int peek()
{
    return queue[front];
}

bool isEmpty()
{
    return item==0;
}

bool isFull()
{
    return item==N;
}

int size()
{
    return item;
}

void insert(int data)
{
    if(!isFull())
    {
        if(rear==N-1)
        {
            rear=-1;
        }
        queue[++rear]=data;
        item++;
    }
    else
    {
        printf("Queue is full, can't insert item %d\n",data);
    }
}

int removeData()
{
    int data=queue[front++];
    if(front==N)
    {
        front=0;
    }
    item--;
    return data;
}

int main()
{
    insert(3);
    insert(5);
    insert(9);
    insert(1);
    insert(12);

    //Queue: 3 9 5 1 12
    insert(15);

    //New Queue: 3 9 5 1 12 15

    if(isFull())
    {
        printf("Queue is full\n");
    }

    int num=removeData();
    printf("Element removed : %d\n",num);

    //Queue after removal: 5 9 1 12 15

    insert(16);

   // New Queue= 16 5 9 1 12 15 (front =1 rear=5)

    insert(17); // This will fail because Queue is full
    insert(18); // same as well


    printf("Element at front: %d\n",peek());

    printf("---------------------\n");
    printf("index: 5 4 3 2 1 0 \n");
    printf("---------------------\n");

    printf("Queue: ");
    while(!isEmpty())
    {
        int n=removeData();
        printf("%d ",n);
    }
    printf("\n");

    return 0;
}
