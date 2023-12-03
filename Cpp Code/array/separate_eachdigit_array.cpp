#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={12,3450,78,90};

    for(int i=0 ; i<5 ; i++){
        string s=to_string(arr[i]);
        reverse(s.begin(),s.end());
        int n=stoi(s);
        
        while(n>-1){
            if(n==0){
                cout<<0<<" ";
            }
            int rem=n%10;
            cout<<rem<<" ";
            n=n/10;
        }
    }
}