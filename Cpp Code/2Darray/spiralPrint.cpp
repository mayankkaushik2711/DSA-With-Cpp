#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is\n";

    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }   
        cout<<"\n"; 
    }
    
    cout<<"spiral print is\n";

    int l=0;
    int r=n-1;
    int t=0;
    int b=m-1;

    while(l<=r && t<=b){
        for(int i=l ; i<=r ; i++){
            cout<<arr[t][i]<<" ";
        }
        t++;

        for(int i=t; i<=b ;i++){
            cout<<arr[i][r]<<" ";
        }
        r--;

        for(int i=r ; i>=l ;i--){
            cout<<arr[b][i]<<" ";
        }
        b--;

        for(int i=b ; i>=t ; i--){
            cout<<arr[i][l]<<" ";
        }
        l++;
    }

}