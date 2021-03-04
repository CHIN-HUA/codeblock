#include <iostream>
#define SIZE 5

using namespace std;

int A[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int value)
{
    if(rear == SIZE - 1)  //queue is full
    {
        cout << "Queue is full\n";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        A[rear] = value;
    }

}

void dequeue()
{
    if(isempty())
    {
        cout << "Queue is empty\n";
    }
    else if(front == rear) // only one element
    {

        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void showfront()
{
    if(isempty())
    {
        cout <<"Queue is empty\n";

    }
    else
    {
        cout << "element at front is: " << A[front];
    }
}

void displayQueue()
{
    if(isempty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            cout << A[i] <<" ";
        }
    }
}
int main()
{
    enqueue(2);
    enqueue(3);

    displayQueue();

    dequeue();

    showfront();

    return 0;
}
