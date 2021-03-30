#include <iostream>
#include <climits> // max & min tamaño de los tipo enteros
#include <cfloat> // max & min tamaño de los tipo reales
using namespace std;
/*
* Imprima los valores extremos de varios tipos de enteros.
*/
int main() {
    cout << "el valor max de tipo short es " << SHRT_MAX << endl;
    cout << "el valor min de tipo short es " << SHRT_MIN << endl;
    cout << "el valor max de tipo int es " << INT_MAX << endl;
    cout << "el valor min de tipo int es " << INT_MIN << endl;
    cout << "el valor max de tipo long es " << LONG_MAX << endl;
    cout << "el valor min de tipo long es " << LONG_MIN << endl;
// long long values no existe en toda computadora
    cout << "el valor max de tipo long long es " << LLONG_MAX << endl;
    cout << "el valor min de tipo long long es " << LLONG_MIN << endl;
    cout << "el valor min positivo de tipo float es "
         << FLT_MIN << endl;
    cout << "el valor max de tipo float es "
         << FLT_MAX << endl;
    cout << "el valor min positivo de tipo of a double es "
         << DBL_MIN<< endl;
    cout << "el valor max de tipo double es "
         << DBL_MAX << endl;
// long double no existe en toda computadora
    cout << "el valor min positivo de tipo long double es "
         << LDBL_MIN<< endl;
    cout << "el valor min de tipo epsilon de tipo long double es "
         << LDBL_EPSILON << endl;
    cout << "el valor max de tipo long double es "
         << LDBL_MAX << endl;
    return 0;
}
