#include<iostream>
using namespace std;


int age=4;

class player{
public:
    int age;
    int score;

    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }

    int getAge(){
        return age;
    }

    int getScore(){
        return score;
    }
};

int addscore(player a,player b){
        return a.getScore()+b.getScore();  
}

player getmaxscore(player a,player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    player mayank;
    player madhu;
    
    player *jai=new player;
    

    jai->setScore(90);
    mayank.setScore(100);
    madhu.setScore(110);
    int ansscore=addscore(mayank ,madhu);
    cout<<ansscore<<endl;

    player achhaplayer=getmaxscore(mayank,madhu);
    cout<<achhaplayer.getScore()<<endl;

    cout<<jai->getScore();

}