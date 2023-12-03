// #include<iostream>
// using namespace std;

// class hero{
//     public:
    
//     int n;

//     //creating default constructor
//     hero(){
//         cout<<"how are u hero"<<" ";
//     }

//     hero(int n){
//         this->n = n;
//         cout<<this<<" ";
//     }

    
// };

// int main(){

//     //default constructor 
//     // hero ironman;

//     // paramiterised constructor
//     hero ironman(5);

//     // cout<<&ironman.n;
//     // hero *hulk = new hero(5);
// }

// .......................parameterized constructor............

// #include<iostream>
// using namespace std;

// class bkr{
//     public:
//     int age;
//     int score;

//     bkr(int age,int score){
//         this->age=age;
//         this->score=score;
//     }
    
//     ~bkr(){
//         cout<<"abe mai to call ho gya\n";
//     }
    
   
// };

// int main(){
//     bkr mayank(20,100);
//     bkr madhu(18,120);
//     bkr jai(15,150);
//     // cout<<sizeof(machaenge);
//     cout<<mayank.age<<" "<<mayank.score<<endl;
//     cout<<madhu.age<<" "<<madhu.score<<endl;
//     cout<<jai.age<<" "<<jai.score<<endl;
// }


// .......................copy constructor

#include<iostream>
using namespace std;

class player{

    public:
    int age;

    player(){};
    player(player &a){
        this->age=a.age;
        cout<<"call laga\n";
    }

};

int main(){
    player mayank;
    mayank.age=50;
    player madhu(mayank);
    cout<<madhu.age;
}