#include<iostream>
using namespace std;

int maxi(int array[],int size)
{
    int max=array[0];
    for (int i = 0; i < size; i++)
    {
        if(array[i]>max){
            max=array[i];
            
        }
    }
    return max;
    
}

int min(int array[],int size)
{
    int minimum=array[0];
    for (int i = 0; i < size; i++)
    {
        if(array[i]<minimum)
        {
            minimum=array[i];
        }
    }
    return minimum;
    
}

int main()
{
    int arr[]={1,2,1,5,3};
    int a=sizeof(arr)/sizeof(arr[0]);
    cout<< "maximum is" <<" "<< maxi(arr,a)<<endl;
    cout<< "minimum is" <<" "<< min(arr,a);
}