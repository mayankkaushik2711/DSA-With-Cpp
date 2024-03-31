#include<iostream>
using namespace std;

struct node{
    int val;
    struct node* left;
    struct node* right;

    node(int num){
        val=num;
        left=NULL;
        right=NULL;
    } 
};

void print(struct node* Node){
    cout<<Node->val<<" ";
}

void postorder(struct node* Node){
    if(Node==NULL){
        return;
    }
    postorder(Node->left);
    postorder(Node->right);
    print(Node);
}

int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    postorder(root);
}

