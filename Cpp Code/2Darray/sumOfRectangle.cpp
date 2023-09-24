#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<"enter indexes\n";
    cout<<"enter first index as m and n\n";
    int m,n;
    cin>>m>>n;
    cout<<"enter second index as a and b\n";
    int a,b;
    cin>>a>>b;

    int sum=0;
    for(int i=m ; i<=a ; i++){
        for(int j=n ; j<=b ; j++){
            sum=sum+arr[i][j];
        }
    }

    cout<<sum;
}