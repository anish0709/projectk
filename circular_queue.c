#include <stdio.h>
#define capacity 5

int queue[capacity];

int front = -1, rear = -1;

// Here we check if the Circular queue is full or not
int checkfull()
{
    if ((front == rear + 1) || (front == 0 && rear == capacity - 1))
    {
        return 1;
    }
    return 0;
}

// Here we check if the Circular queue is empty or not
int checkempty()
{
    if (front == -1)
    {
        return 1;
    }
    return 0;
}

// Addtion in the Circular Queue
void enqueue(int value)
{
    int temp;
    if (front==0 && rear==capacity-1)
    {
        // printf("overflow condition\n");
        for(int i=rear; i>0; i--)
        {   
            queue[i]=queue[i-1];
        }
        queue[front]=value;
    }
    else
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1);
        queue[rear] = value;
        printf("%d was was enqueued to circular queue \n", value);
    }
}

int dequeue()
{
    int variable;
    if (checkempty())
    {
        printf("underflow condition");
        return -1;
    }

    else
    {
        variable = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }

        else
        {
            front = (front + 1);
        }
        printf("%d was dequeued from circular queue\n", variable);
        return 1;
    }
}

void print()
{
    int i;
    if (checkempty())
    {
        printf("nothing to deque");
    }
    else
    {
        printf("\nThe queue looks like: \n");
        for (i = 0; i < front; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = rear; i <= capacity - 1; i++)
        {
             printf("%d ", queue[i]);
        }
    }
}

int main()
{
    // Not possible as the Circular queue is empty
    dequeue();

    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(35);

    print();
    dequeue();
    dequeue();

    print();

    enqueue(40);
    enqueue(45);
    enqueue(50);
    enqueue(55); // Overflow condition
    print();

    return 0;
}
