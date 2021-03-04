#include <iostream>


using namespace std ;

class Node
{
    public:
    int data;
    Node *link;
};
Node *front, *rear;

void add(Node *t)
{
    if(rear == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->link = t;
        rear = t;
    }
}

bool delete(int &item)
{
    if(front == NULL)
    {
        return false; // Empty
    }
    else
    {
        Node *t = front;
        front = front->link;
        item = t->data;
        ret(t);
        if(front == NULL)
        {
            rear = NULL;
        }
        return true;
    }
}

int main()
{


    return 0;
}


