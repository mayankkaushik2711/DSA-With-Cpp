#include<iostream>
using namespace std;
// ...................static function.................s

class player{
public:
    int score;
    static int age;

    static int ret(){
        return age;
    }
};

int player::age=5;

int main(){
    player mayank;
    cout<<player::ret();


}