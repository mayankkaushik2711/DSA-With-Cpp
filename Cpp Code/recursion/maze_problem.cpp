#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr==er && sc==ec) return 1;
    if(sc>ec || sr>er)  return 0;

    int rightway=maze(sr,sc+1,er,ec);
    int downway=maze(sr+1,sc,er,ec);
    return rightway+downway;
}

int main(){
    int sr,sc,er,ec;
    cin>>sr>>sc>>er>>ec;

    cout<<maze(sr,sc,er,ec);
    cout<<" ";
}
