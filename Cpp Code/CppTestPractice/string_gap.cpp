#include<iostream>
using namespace std;

int main(){
    string s="akkadbakkadbambeybo";
    int n=3;
    string khali="";
    int size=s.size();

    for(int i=0 ; i<size ; i=i+n){
        int prev=0;
        for(int j=prev+3 ; j<i ;j++){
            khali.push_back(s[j]);
        }
        khali.push_back(' ');
    }
    cout<<khali;
    
}