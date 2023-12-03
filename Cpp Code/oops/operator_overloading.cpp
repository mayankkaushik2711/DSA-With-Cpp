#include<iostream>
using namespace std;

class complex{
public:
    int real;
    int imaginary;

    complex operator +(complex &c1){
        complex a3;
        a3.real = c1.real + this->real;
        a3.imaginary = c1.imaginary + this->imaginary; 
        return a3;
    }

    // complex operator -(complex &c1){
    //     complex a3;
    //     a3.real = c1.real - this->real;
    //     a3.imaginary = c1.imaginary - this->imaginary; 
    //     return a3;
    // }
};

int main(){
    complex a1,a2;
    a1.imaginary=10;
    a1.real=11;
    a2.imaginary=2;
    a2.real=4;

    complex c4=a1+a2;
    // complex c5=a1+a2+c4;
    // complex c6=a1+a2+c4+c5;
    cout<<c4.real<<" "<<c4.imaginary<<endl;
    // cout<<c5.real<<" "<<c5.imaginary<<endl;
    // cout<<c6.real<<" "<<c6.imaginary;
}