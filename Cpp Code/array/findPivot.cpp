// #include<iostream>
// using namespace std;

// int isPivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int m=(s+e)/2;
//     while(s<e){
//        if(arr[m]>=arr[0]){
//             s=m+1;
            
//        }

//        else
//        {
//         e=m;
//        }
//        m=(s+e)/2;
//     }
//     return s;
    
    
// }

// int main(){
//     int array[6]={5,6,7,1,2,3};
    
//  cout<<isPivot(array,6);
// }


#include<iostream>
using namespace std;

int isPivot(int arr[],int s){
    int start=0;
    int end=s-1;
    int mid=(start+end)/2;
    while (start<end)
    {
        
        if(arr[0]<arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=(start+end)/2;
       
    }
    return arr[start] ;
    
}

int main(){
    int array[7]={6,7,1,2,3,4,5};
    cout<<isPivot(array,7);
}