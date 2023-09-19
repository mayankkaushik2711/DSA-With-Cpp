#include<iostream>
using namespace std;

int rev(int arr[],int size){
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    for (int i = 0; i < size/2; i++)
    {
        int num=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=num;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int a;
    cout<<"enter size ";
    cin>>a;
    int array[a];
     for (int i = 0; i < a; i++)
    {
        cin>>array[i];
    }

    rev(array,a);
}