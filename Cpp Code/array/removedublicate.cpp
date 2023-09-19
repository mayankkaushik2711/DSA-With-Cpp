// #include<iostream>
// #include<algorithm>
// using namespace std;

// int isDubli(int arr[],int size){
//         sort(arr,arr+size);
//         int j=0;
//         ;
//         for (int i = 0; i < size; i++)
//         {
//             if(arr[i]!=arr[i+1]){
//                 arr[j]=arr[i];
//                 j++;
//             }

            
//         }

//         for (int i = 0; i < j; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
        

        
        
        
// }

// int main(){
//     int array[5]={4,3,1,5,3};
//     isDubli(array,5);
// }

#include<iostream>
#include<algorithm>
using namespace std;
int search(int arr[],int size,int val){

    sort(arr,arr+size);
    for(int i=0 ; i<size ; i++){
        if (arr[i]==val)
        {
            cout<<i;
        }
        
    }
}

int main(){
    int array[]={9,4,6,3,7,2};
    search(array,6,4);
}