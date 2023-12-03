#include<iostream>
#include<string>
using namespace std;

void call(string emp,int left,int right,int n){
    if(right==n){
        cout<<emp<<endl;
        return;
    }
    if(left<n) call(emp+"(" , left+1 , right , n);
    if(right<left) call(emp+")" , left , right+1 , n);
}

int main(){
    string emp="";
    call(emp,0,0,3);
}