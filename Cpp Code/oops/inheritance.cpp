#include<iostream>
using namespace std;

class vehicle{
public:
    int tyre;
    int gear;
    int seat;

    vehicle(){
        cout<<"ha ha call hua"<<endl;
    }
};

class car : public vehicle{
public:
    int stearing;

    car(){
        cout<<"car call\n";
    }
};

class bike : public vehicle{
public:
    int handle;
};

int main(){
    car maruti;
    maruti.tyre=4;
    
}