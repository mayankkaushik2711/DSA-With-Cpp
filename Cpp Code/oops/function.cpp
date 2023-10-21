#include<iostream>
using namespace std;

class player{
    public:
    int age;
    int salary;

    void retsal(){
        cout<<"salary is "<<salary;
    }
};

int main(){
    player mayank;
    mayank.salary=2;
    mayank.retsal();
}