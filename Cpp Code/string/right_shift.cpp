#include<iostream>
using namespace std;

int main(){
    string str="mk";
    int size=str.size();
    char store=str[size-1];

    if (size==1)
    {
        cout<<str;
    }
    else
    {
        for (int i = size-1; i >= 0; i--)
        {
            str[i]=str[i-1]; 
        }
        str[0]=store;

        cout<<str;
    }
}