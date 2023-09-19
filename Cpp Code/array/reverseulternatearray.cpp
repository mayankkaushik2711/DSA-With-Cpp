#include<iostream>
using namespace std;

int rev(int arr[],int size){
    if(size%2==1)
    {
        for (int i = 0; i < (size-1); i=i+2)
        {
        
            int num=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=num;
        }
    }
    else{
        for (int i = 0; i < size; i=i+2)
        {
        
            int num=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=num;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main()
{
    int array[]={1,2,3,4,5,7};
    rev(array,6);
}