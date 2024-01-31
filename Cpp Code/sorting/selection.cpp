#include<iostream>
using namespace std;

void selection(int arr[],int size){

    for(int i=0 ; i<size-1 ; i++){
        int min=i;
        for(int j=i+1 ; j<size ; j++){
            if(arr[min]>arr[j])
            min=j;
        }

        swap (arr[min],arr[i]);
    }

    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    selection(arr,n);
}