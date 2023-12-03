#include<iostream>
using namespace std;

int main(){
    int arr[5];
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<" ";
    // cout<<&arr[1]<<" ";
    // cout<<&arr[2]<<" ";
    // cout<<&arr[3]<<" ";
    // cout<<&arr[4]<<" ";

    // cout<<endl;
    int *ptr = &arr[0];

    for(int i=0 ;  i<5 ; i++){
        cin>>*(ptr+i);
    }

    for(int i=0 ;  i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}