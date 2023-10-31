// #include<iostream>
// using namespace std;

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     return;
// }

// int main(){
//     int x=5,y=6;
//     cout<<x<<" "<<y;
//     swap(&x,&y);
//     cout<<x<<" "<<y;

// }


// ..................................using alias

#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int x=3,y=6;
    swap(x,y);
    cout<<x<<" "<<y;
}