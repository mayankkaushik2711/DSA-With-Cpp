#include<iostream>
using namespace std;

class player{
public:
    int n1;
    int n2;


    player(int n1,int n2){
        this->n1=n1;
        this->n2=n2;
        cout<<n1+n2<<endl;
    }

    player(int n1){
        cout<<n1;
    }
};

int main(){
    player mayank(10,20);
    player madhu(10);

}