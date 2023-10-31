#include<iostream>
using namespace std;

int main(){
    int x=9;
    int y=1;

    // int* p1,p2; ................................wrong way to write


    int *p1=&x,*p2=&y;
    cout<<*p1<<" "<<*p2;

}