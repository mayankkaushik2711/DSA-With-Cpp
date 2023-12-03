#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    string s;
    getline(cin,s);

    string e;
    int size=s.size();
    int start=0; //....................my name is mk

    for(int i=0 ; i<size ; i++){
        if(s[i]==' '){
            
            int end=i;
            reverse(s.begin()+start,s.begin()+end);
            start=i+1;
            
        }

    }
    reverse(s.begin() + start, s.end());
    cout<<s;

    
    
}