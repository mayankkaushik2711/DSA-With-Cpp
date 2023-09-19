#include<iostream>
#include<algorithm>
using namespace std;

int bubble(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j< size; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int array[5]={12,11,14,33,12};
    bubble(array,5);
}