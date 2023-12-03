#include<iostream>
using namespace std;

class cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int avgRunsInTest;
};

int main(){
    cricketer mayank;
    mayank.name='m';
    mayank.age=10;
    mayank.noOfTestMatches=20;
    mayank.avgRunsInTest=60;

    cricketer madhu;
    madhu.name='k';
    madhu.age=20;
    madhu.noOfTestMatches=40;
    madhu.avgRunsInTest=70;

    cricketer cricketers[2]={mayank,madhu};
    for(int i=0 ; i<2 ; i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTestMatches<<endl;
        cout<<cricketers[i].avgRunsInTest<<endl;
    }
}