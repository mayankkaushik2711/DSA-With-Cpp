#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void subset(string str,string emp,int index){
    if(index==str.size()){
        cout<<emp<<endl;
        return;
    }

    char c=str[index];
    if(emp!=c){
        
    }
}

int main(){
    string str="aaba";
    string emp="";
    sort(str.begin(),str.end());
    cout<<str;
    subset(str,emp,0);
}