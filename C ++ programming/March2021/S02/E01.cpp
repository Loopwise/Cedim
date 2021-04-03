/*
    Programa que indica si un número es par.
    
    Ejemplo de cajero, el usuario va a digitar el monto que va a entregar.
    Y el cajero internamente le mostrará si es que ha pagado completo, le falta
    o si es que le debemos vuelto
*/

#include <iostream>

using namespace std;

int main(){
    int MONTO = 24;
    int x;
    cout << "Ingrese el monto que pagara: ";
    cin >> x;
    if( x > MONTO){
        cout << "Ha pagado de mas, su vuelto es: "<< x - MONTO;
    }
    if( x < MONTO){
        cout << "Le falta pagar "<< MONTO - x;
    }
    if( x == MONTO){
        cout << "Ha pagado el monto exacto.";
    }
 
}
