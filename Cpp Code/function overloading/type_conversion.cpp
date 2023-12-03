#include <iostream>
using namespace std;

// void function(float);
// void function(int);

// void function(float x)
// {
//     cout << "Value of x is : " << x << endl;
// }
// void function(int y)
// {
//     cout << "Value of y is : " << y << endl;
// }

// int main()
// {
//     function(3.4);
//     function(34);
//     return 0;
// }



// #include <iostream>
#include<algorithm>
// #include<bits/stdc++.h>
// #include <iostream>
// #include <algorithm>

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate HCF (GCD - Greatest Common Divisor)
    int hcf = gcd(num1, num2);
    cout << "HCF (GCD): " << hcf << endl;

    // Calculate LCM (Least Common Multiple)
    int lcm = (num1 * num2) / hcf;
    cout << "LCM: " << lcm << endl;

    return 0;
}

