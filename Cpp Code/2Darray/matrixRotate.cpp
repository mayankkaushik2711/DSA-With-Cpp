#include<iostream>
using namespace std;

int main(){
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int m=4;
    int n=5;

    int rotarr[n][m];
   

    for (int i = 0; i < m; i++)
    {
        for(int j=0 ; j<n ; j++){
            rotarr[j][m-1-i]=arr[i][j];    
        }
       
    }
    
    for (int i = 0; i<n; i++)
    {
        for(int j=0 ; j<m ; j++){
            cout<<rotarr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}