#include<iostream>
#include<climits>
using namespace std;

// void substr(string emp,string str){
//     if(str==""){
//         cout<<emp<<endl;
//         return;
//     }
//     char a=str[0];
//     substr(emp+a,str.substr(1));
//     substr(emp,str.substr(1));

// }

// int main(){
//     string str="ab";
//     string emp="";
//     substr(emp,str);
// }

void subStr(string str,string emp,int index){
    if(str.size()==index){
        cout<<emp<<endl;
        return;
    }
    char c=str[index];
    subStr(str,emp+c,index+1);
    subStr(str,emp,index+1);
}

int main(){
    string str="abc";
    string emp="";
    subStr(str,emp,0);
}

