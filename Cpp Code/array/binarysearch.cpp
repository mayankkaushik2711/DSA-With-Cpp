#include<iostream>
using namespace std;

bool search(int arr[],int size,int num)
{
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==num)
        {
            return 1;
        }
        
        
    }
    return 0;
}

int main()
{
    int a;
    cout<<"no of element in array";
    cin>>a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < a; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
    int b;
    cout<<"enter no to search ";
    cin>>b;

    if(search(array,a,b)==1){
        cout<<b<<" is present ";
    }

    else
    {
        cout<<b<<" is not present ";
    }
}