#include<iostream>
using namespace std;


class player{
    public:
    int age;
    int score;
    void add(int a){
        score=score+a;
        
    }
};

int main(){
    player mayank;
    mayank.age=20;
    mayank.score=100;
    cout<<mayank.score<<endl;
    mayank.add(10);
    cout<<mayank.score<<endl;
}