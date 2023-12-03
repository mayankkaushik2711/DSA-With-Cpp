#include<iostream>
using namespace std;

class adder{
public:
    int feet;
    int inch;

    adder operator +(adder &a){
        adder ans;
        ans.feet=a.feet + this->feet;
        
        ans.inch=a.inch + this->inch;
        if(ans.inch>=12){
           ans.feet = ans.feet+1;
           ans.inch = ans.inch-12;
        }

        return ans;
    }
};

int main(){
    adder obj1;
    adder obj2;
    obj1.feet=3;
    obj1.inch=11;
    obj2.feet=3;
    obj2.inch=4;

    adder obj3 =  obj1 + obj2;
    cout<<obj3.feet<<"'"<<obj3.inch<<"''";
}