#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    Node* left;
    Node* right;
};

void Preorder(Node *root)
{
    if(root == NULL) return;
    printf("%c ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node *root)
{
    if(root == NULL) return;
    Inorder(root->left);
    printf("%c ", root->data);
    Inorder(root->right);
}

void Postorder(Node *root)
{
    if(root == NULL) return;
    Postorder(root->left);
    printf("%c ", root->data);
    Postorder(root->right);
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
