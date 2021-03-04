#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *link;
};
Node *top = NULL;

void create()
{
    top  = NULL;
}

void push(Node *t)
{
    t->link = top;
    top = t;
}

bool pop(int &item)
{
    if(top == NULL)
    {
        return false; //Empty
    }
    else
    {
        Node *t = top;
        top = top->link;
        item = t->data;
        ret(t);
        return true;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
