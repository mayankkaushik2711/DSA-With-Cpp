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

void print(struct node* Node){
    cout<<Node->val<<" ";
}

void preorder(struct node* Node){
    if(Node==NULL){
        return;
    }
    print(Node);
    preorder(Node->left);
    preorder(Node->right);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    preorder(root);
    
}