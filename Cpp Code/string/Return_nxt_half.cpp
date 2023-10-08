#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    int half=str.size()/2;

    cout<<str.substr(half);
}
//comment
