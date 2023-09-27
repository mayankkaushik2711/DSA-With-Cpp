#include<iostream>
using namespace std;

int main(){
    char str[7]={'a','b','c','d','e','f'};
    // cout<<(int)str[5]<<endl;

//.........................LOOP NO 1........................
    for(int i=0 ; i<10 ; i++){
        cout<<(int)str[i]<<" ";
    }

    cout<<endl;
//..........................LOOP NO 2.........................
    for(int i=0 ; str[i]!='\0' ; i++){
        cout<<(int)str[i]<<" ";
    }
    // char a='\0';
    // cout<<(int)a;

//     int arr[5]={1,2,3,4,5};
//     cout<<arr[5];
}