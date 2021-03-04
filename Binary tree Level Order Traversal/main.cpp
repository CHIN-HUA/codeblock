#include <iostream>
#include <queue> //C++ STL

using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;

};

void LevelOrder(Node *root)
{
  if(root == NULL) return;
  queue<Node*> Q; // 一個空的 queue
  Q.push(root);
  // while there is at least ne discovered node
  while(!Q.empty())
  {
      Node* current = Q.front();
      cout << current->data << " ";
      if(current->left != NULL) Q.push(current->left);
      if(current->right != NULL) Q.push(current->right);
      Q.pop(); // removing the element at front
  }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
