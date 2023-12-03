#include<iostream>
using namespace std;

void remov(string str,string newstr,int size,int n){
    if (n==size)
    {
        cout<<newstr;
        return;
    }
    if (str[n]!='i')
    {
        newstr=newstr+str[n];
        remov(str,newstr,size,n+1);
    }
    else{
    remov(str,newstr,size,n+1);
    }
}

int main(){
    string str="mayank kaam bilkul nhi karta hai";
    int size=str.size();
    string newstr="";
    remov(str,newstr,size,0);
}