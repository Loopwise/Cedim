/*
    Determinar si un número es primo.
*/
#include <iostream>

using namespace std;

int main(){
    int M = 1000;
    int n = 2;
    while( n < M){
        int d = 1;
        int divisores = 0;
        while( d <= n){
            if(n%d==0){
                divisores++;
            }
            if( divisores > 2){
                break;
            }
            d++;
        }
        
        if(divisores == 2 ){
            cout << n << " ";
        }
        n++;
    }
}
