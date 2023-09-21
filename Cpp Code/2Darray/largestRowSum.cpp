#include<iostream>
using namespace std;

int largestRowSum(int arr[][3],int row ,int col ){
    int store=0;
    for(int i=0 ; i< row ; i++){
        int sum=0;
        for(int j=0 ; j< col ; j++){
            sum=sum+arr[i][j];
            if(sum>store){
                store=sum;
            }
        }
    }

    return store;

}
int main(){
    int m;
    int n;
    cin>>m>>n;
    int arr[m][n];

    for(int i=0; i <m ; i++){
        for(int j=0 ; j<n ;j++){
            cin>>arr[i][j];
        }
    }
    

    cout<<largestRowSum(arr,m,n);
}