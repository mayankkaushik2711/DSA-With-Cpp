#include<iostream>
using namespace std;

void swap(char &a,char &b){
    int temp=a;
    a=b;
    b=temp;
    return;
    // cout<<a<<b;
}

int main(){
    string s;
    getline(cin,s);

    int n;
    cin>>n;

    int size=s.size();

    int start=n;
    int end=size-1;

    for(int i=0 ; i<size/2 ; i++){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s;
    
}