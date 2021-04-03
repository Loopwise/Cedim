/*
    Realizar la serie de Fourier de la Tangente.
    F(x) = Tan(x)
*/
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    while(n != 1){
        if(n%2 == 0)
            n /= 2;
        else
            n = 3*n + 1;
        cout << n << " ";
    }
    cout << '\n';
    n = 0;
    while(n <= 5){
        cout << "a" << n << "*x^" << n;
        if(n != 5){
            cout << " + ";
        }
        n++;
    }
}
