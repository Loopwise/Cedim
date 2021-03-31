/*
    Hallar la tabla de verdad de:
    (p -> q) | (~q -> r)
*/

#include <iostream>

using std::cout;
using std::endl;
using std::string;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r = ( n % 2 == 0 ? "0" : "1" ) + r;
        n /= 2;
    }
    return r;
}

int main()
{
    // 000000000010 = 2
    // 000000001000 = 8
    int a = 0b1100; // 0 + 0*2 + 1*2² + 1* 2³ = 12
    int b = 0b1010; // 0 + 1*2 + 0*2² + 1*2³ = 10
    cout << (a | b) << endl;
    cout << toBinary(a | b);
    return 0;
}
