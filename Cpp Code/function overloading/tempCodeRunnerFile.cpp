#include <iostream>
#include<cmath>
using namespace std;


int main() {
    
    int row;
    cin>>row;
    
    int arr[row][row];
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<row ; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<row ; j++){
            if(i==j){
                
                sum=sum+arr[i][j];
            }
        }
    }
    
    int n=sum;
    cout<<sum<<endl;
    
    int ans=0;
    while(n!=0){
        int rem = n % 10;
        ans=ans*10+rem;
        n=n/10;
        
    }
    cout<<ans;
}