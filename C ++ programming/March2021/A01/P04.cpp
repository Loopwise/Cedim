/*
    Tenemos a un conejo, este conejo quiere recorrer 'n' unidades,
    para esto quiere dar la menor cantidad de saltos posibles.
    Nota: El conejo solo da saltos hasta de 5 unidades.
    Nota2: Da saltos enteros(1,2,3,4,5).
    ¿Cuánto es esta cantidad?
*/
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    cout << n/5 + (n%5==0 ? 0 : 1);
    return 0;
}
