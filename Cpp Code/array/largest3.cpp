#include<iostream>
#include<algorithm>
using namespace std;

int largest(int arr[],int size){
    int small,mid,big=0;
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            small=arr[i];
            
        }
        
    }
    
}