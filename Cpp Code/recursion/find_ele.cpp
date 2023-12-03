// #include<iostream>
// #include<climits>
// using namespace std;

// void findEle(int arr[],int size,int n, int &max){
//     if(n>size) return;
//     if(arr[n]>max) max=arr[n];
//     // cout<<max<<" "<<endl;
//     findEle(arr,size,n+1,max);
    
// }

// int main(){
//     int arr[]={2,4,1,5,6};
//     int size=sizeof(arr)/sizeof(arr[1]);
//     int n=INT_MIN;
//     findEle(arr,size,0,n);
//     // cout<<endl;
//     cout<<n;
// }


#include<iostream>
#include<climits>
using namespace std;

void find_max(int arr[],int n,int &max,int size){
    if(n==size){
        cout<<"max element is "<<max;
        return;
    }
    if(arr[n]>=max){
        max=arr[n];
    }
    find_max(arr,n+1,max,size);

}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num=INT_MIN;
    find_max(arr,0,num,size);
}
