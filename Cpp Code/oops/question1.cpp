#include<iostream>
using namespace std;

class book{

public:
    string name;
    int price;
    int pages;

public:
    int countbook(int n){
        if(price>n){
            return 1;
        }
        else{
            return 0;
        }
        
    }

    bool ispresent(string bname){
        if(bname==name){
            return true;
        }
        return false;
    }
};

int main(){
    book abba;
    abba.price=100;
    cout<<abba.countbook(90);
}