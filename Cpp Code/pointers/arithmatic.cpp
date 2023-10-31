#include<iostream>
using namespace std;

// int main(){
//     int x;
//     int *a=&x;

//     cout<<a<<endl;             //............+4 in end of address hexadecimal 0 1 2 3 4 5 6 7 8 9 a b c d e f 

//     a=a+1;

//     cout<<a;

// }


int main(){
    int x=4;
    int *ptr = &x;//...............4
    cout<<*ptr<<endl;//....................4
    *ptr=*ptr+1;//.....................4+1
    cout<<*ptr;//........................5
}