#include<iostream>
using namespace std;

int main(){
    int x=5;
    int *y=&x;
    int **z=&y;
    cout<<x<<endl;
    cout<<*y<<endl;
    cout<<**z<<endl;
}