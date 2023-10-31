#include<iostream>
using namespace std;

// int main(){
//     int a=3;
//     int b=4;
//     int *ptr=&a;
//     int *ptr2=&b;
//     int num=(*ptr)*(*ptr2);
//     cout<<num;
// }

void sum(int &a,int &b){
    a++;
    b++;
    return;
    
}

int main(){
    int a=5;
    int b=5;
    cout<<a<<" "<<b<<endl;
    sum(a,b);
    cout<<a<<" "<<b;
}