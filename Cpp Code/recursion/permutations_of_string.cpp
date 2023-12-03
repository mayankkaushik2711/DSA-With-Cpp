#include<iostream>
#include<vector> 
using namespace std;

void call(string str,string emp){
    if(str.size()==0){
        cout<<emp<<endl;
        return;
    }
    
    
    
    for(int i=0 ; i<str.size() ; i++){
        char c=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        call(left+right,emp+c);
    }
}

int main(){
    string str="abcde";
    string emp="";
    call(str,emp);
}