#include <iostream>
using namespace std;
/**
*Informe sobre el tamaño de los diversos tipos de datos de C ++.
*
* Otorga diferentes resultados, dependiendo de la maquina
*
*/
int main() {
    // Integer types:
    cout << "El tamano del tipo short son " << sizeof(short)
         << " bytes" << endl;
    cout << "El tamano del tipo int son " << sizeof(int)
         << " bytes" << endl;
    cout << "El tamano del tipo long son " << sizeof(long)
         << " bytes" << endl;
    // long long no existe en todas las computadoras
    cout << "El tamano del tipo long long son" << sizeof(long long)
         << " bytes" << endl;
    // Character , boolean types:
    cout << "El tamano del tipo char son " << sizeof(char) << " bytes" << endl;
    cout << "El tamano del tipo boleano son " << sizeof(bool) << " bytes" << endl;
    // Punto flotante
    cout << "El tamano del tipo flotante son" << sizeof(float)
         << " bytes" << endl;
    cout << "El tamano del tipo doble son " << sizeof(double)
         << " bytes" << endl;
    // long double no existe en todas las computadoras
    cout << "El tamano del tipo long double son" << sizeof(long double)
         << " bytes" << endl;
    return 0;
}

