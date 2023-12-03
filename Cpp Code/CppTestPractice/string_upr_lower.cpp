#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int size=s.size();

    for(int i=0; i<size; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<s;
}