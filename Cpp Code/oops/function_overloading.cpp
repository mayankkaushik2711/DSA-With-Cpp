#include<iostream>
using namespace std;

void sum(int a,int b){
    cout<<a+b;
}

void sum(int a,int b,int c){
    cout<<a+b+c;
}

void sum(int a,int b,int c,int d){
    cout<<a+b+c+d;
}

int main(){
    int n;
    cout<<"enter a no\n";
    cin>>n;
    
    int a,b,c,d;
    switch (n)
    {
    case 2:
         a=3;
         b=3;
        sum(a,b);
        break;

    case 3:
         a=3;
         b=3;
         c=3;
        sum(a,b,c);
        break;
    
    case 4:
         a=3;
         b=3;
         c=3;
         d=3;
        sum(a,b,c,d);
        break;
    
    default:
    cout<<"entered wrong value";
        break;
    }


}