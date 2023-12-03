#include<iostream>
using namespace std;

class a{
public:
    int a_ka_public;
    a(){
        
        cout<<"a ka instance\n";
    }
};

class b : virtual public a{
public:

    b(){
        cout<<"b ka instance\n";
    }
};

class c : virtual public a{
public:

    c(){
        cout<<"c ka instance\n";
    }
};

class d : public b,public c{
public:

    d(){
        cout<<"d ka instance\n";
    }

    void show(){
        cout<<a_ka_public;
    }
};

int main(){
    d D;
    D.c::a_ka_public=10;
    D.show(); 
}