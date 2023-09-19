#include<iostream>
using  namespace std;

int sort(int arr[],int size){
    int left=0;
    int right=(size-1);
    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }

        swap(arr[left],arr[right]);
        left++;
        right--;
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    
    
    
}

int main(){
    int array[6]={0,1,1,0,1,0};
    sort(array,6);
     for (int i = 0; i < 6; i++)
    {
        cout<<array[i];
    }

}