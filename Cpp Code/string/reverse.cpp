#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
//    ........................................inbuilt function.....................
//    reverse(str.begin(),str.end());
//    cout<<str;
//    .........................................using loops.........................

// for(int i=str.size()-1 ; i>=0 ; i--){
//     cout<<str[i];
// }
// ......................................while.........


int s=0;
int e=(str.size()-1);

while(e>s){
    swap(str[s],str[e]);
    s++;
    e--;
}

cout<<tolower(0);
}
