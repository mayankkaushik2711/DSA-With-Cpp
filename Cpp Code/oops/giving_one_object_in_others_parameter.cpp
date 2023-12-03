#include<iostream>
using namespace std;

class hero{
    public:

    string name;
    int age;
    
    hero(string name,int age){
        this->name=name;
        this->age=age;
    }
};

int main(){
    hero ironman("kaka",30);
    hero hulk(ironman);
    
    cout<<hulk.name<<endl;
    cout<<hulk.age<<endl;

}