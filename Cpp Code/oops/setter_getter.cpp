#include<iostream>
using namespace std;

class myclass{
private:
    int no;
    int sq;
public:

    // setter..............................
    void putno(int x){
        no=x;
    }

    void putsq(int y){
        sq=y;
    }

    // getter................................
    void retno(){
        cout<<no<<endl;
    }

    void retsq(){
        cout<<sq;
    }

};

int main(){
    myclass d;
    d.putno(5);
    d.putsq(10);
    d.retno();
    d.retsq();
}