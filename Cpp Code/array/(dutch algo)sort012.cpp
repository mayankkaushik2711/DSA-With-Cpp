#include<iostream>
#include<algorithm>
using namespace std;

int sort(int arr[],int size){
    int low=0;
   int  mid=0;
    int high=size-1;
    while (mid<=high)
    {
       if (arr[mid]==0)
       {
        swap(arr[mid],arr[low]);
        mid++;
        low++;
        
       }

        else if (arr[mid]==1)
       {
        mid++;
    
       }

        else if (arr[mid]==2)
       {
        swap(arr[mid],arr[high]);
        high--;
        
       }

       


    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int array[]={1,2,1,0,1};
    sort(array,5);
}