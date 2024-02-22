#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="12333444555566666";
    int k=2;
    int start=k;
    int end=str.size()-k;
    reverse(str.begin()+start,str.begin()+end);
    
    cout<<str;
}