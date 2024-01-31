#include<iostream>
using namespace std;

void reverse(string &str,int start,int end){
    
    if(start>end){
        return;
    }
    swap(str[start],str[end]);
    start++;
    end--;
    reverse(str,start,end);
}

int main(){
    string str="abcde";

    reverse(str,0,4);
    cout<<str;
}