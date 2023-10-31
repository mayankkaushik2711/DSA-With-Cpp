#include<iostream>
using namespace std;


int main(){
    // int *a=NULL;
    // cout<<*a;
    
    int a=1000;
    int *ptr=&a;
    ptr--;
    cout<<ptr<<" ";
   
}