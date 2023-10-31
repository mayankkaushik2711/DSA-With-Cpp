#include<iostream>
using namespace std;

int main(){
    int x=20;
    int* p= &x;
    
    *p=10;
    
    cout<<*p<<endl;
    cout<<&x;

    }