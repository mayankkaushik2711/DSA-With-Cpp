#include<iostream>
using namespace std;

int main(){
    string str="af";
    int pointer1=0;
    int pointer2=0;
    int count=1;
    for(int i=0 ; i<str.size()-1 ; i++){
        if(str[i+1]==str[i]){
            pointer2++;
        }
        else{
            int diff=pointer2-pointer1;
            cout<<str[i]<<diff+1;
            pointer2++;
            pointer1=pointer2;
        }
    }
    cout<<str[str.size()-1 ]<<pointer2-pointer1+1;
}