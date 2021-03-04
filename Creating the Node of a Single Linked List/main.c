#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data0;
    int data1;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data0 = 45;
    head->data1 = 100;
    head->link = NULL;

    printf("%d\n", head->data0);
    printf("%d", head->data1);
    return 0;
}
