#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }

    void inserthead(ListNode* &head,int val){
        ListNode* temp=new ListNode(val);
        temp->next=head;
        head=temp;
    }

    void print(ListNode* &node){
    ListNode* temp=node;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

};


int main(){

}