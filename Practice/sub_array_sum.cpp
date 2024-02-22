#include<iostream>
#include<vector>
using namespace std;

void call(string &str, string emp,int index,int size){
    if(index==size){
        cout<<emp<<" ";
        cout<<endl;
        return;
    }
    char val=str[index];
    call(str,emp+val,index+1,size);
    call(str,emp,index+1,size);

}

int main(){
    string str="abcdef";
    string emp="";
    call(str,emp,0,6);
}