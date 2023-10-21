#include<iostream>
using namespace std;

class player{
    public:
    int age;
    int salary;
};


int main(){
    player mayank;
    mayank.age = 20;
    mayank.salary = 1;


    cout<<"mayank's age is "<<mayank.age<<endl;
    cout<<"mayank's salary is "<<mayank.salary<<endl;
}
