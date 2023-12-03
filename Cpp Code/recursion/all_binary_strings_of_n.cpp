#include<iostream>
using namespace std;

void call(string str,int index,int n){
    if(index==n){
        
            cout<<str<<endl;   
        
        return;
    }
    call(str+'0',index+1,n);
    if(str.size()==0){
        
        call(str+'1',index+1,n);
    }
    else if(str[str.size()-1]=='0'){
        call(str+'1',index+1,n);
    }
}

int main(){
    string str="";
    int n=3;
    call(str,0,n);
}