#include <iostream>
using namespace std;

struct node
{
    int val;
    struct node *left;
    struct node *right;

    node(int num)
    {
        this->val = num;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    cout<<root->left->right->val;
}