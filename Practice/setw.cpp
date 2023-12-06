#include <iostream>
#include <iomanip>

using namespace std;

// int main() {
//     int num = 4222222;
    
//     cout << "Default Output: " << num << endl;
//     cout << "Formatted Output: " << setw(16) << num << endl;
    
//     return 0;
// }


int main(){
    int x=10;
    for(int i=0; i<5 ;i++){
        if(i%2==0) continue;
        x+=i;
    }
    cout<<x;
}

//hello
