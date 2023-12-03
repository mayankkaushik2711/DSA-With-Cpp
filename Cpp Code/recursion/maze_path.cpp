#include<iostream>
using namespace std;

void print(int sr,int sc,int er,int ec,string s){
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }
    if(sc>ec || sr>er)  return;

    print(sr,sc+1,er,ec,s+'R');
    print(sr+1,sc,er,ec,s+'D');
    return;
}

int main(){
    int sr,sc,er,ec;
    string s="";
    cin>>sr>>sc>>er>>ec;

    print(sr,sc,er,ec,s);
}
