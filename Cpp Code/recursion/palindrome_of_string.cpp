#include<iostream>
using namespace std;

void pali(string &str,int start,int end){
    if(start>end){
        return;
    }
    swap(str[start],str[end]);
    pali(str,start+1,end-1);
}

int main(){
    string str="jhaj";
    string check=str;
    pali(str,0,4);
    
    bool flag=false;

    if(check==str){
        flag=true;
    }

    cout<<flag;

}