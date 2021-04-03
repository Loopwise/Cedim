/*
    Vamos a elaborar un menú de opciones.
    a) Retirar dinero
    b) Aumentar dinero y mostrar el monto actualizado.
    c) Realizar trasferencia
    En otro caso: Salir
*/

#include <iostream>

using namespace std;

int main(){
    cout << "a) Retirar dinero\n";
    cout << "b) Aumentar dinero\n";
    cout << "c) Realizar trasferencia\n";
    cout << "Presione cualquier tecla para salir\n";
    
    char op; cin >> op;
    
    float D = 65464.41;
    float aux;
    switch(op){
        case 'a':
            cout << "Ingrese la cantidad que quiere retirar"; cin >> aux;
            D -= aux;
            cout << "El monto actual es: "<< D;
            break;
        case 'b':
            cout << "Ingrese la cantidad que quiere ingresar: "; cin >> aux;
            D += aux;
            cout << "El monto actual es: "<< D;
            break;
        case 'c':
            cout << "Ingrese la cantidad que quiere trasnferir: "; cin >> aux;
            D -= aux;
            cout << "El monto actual es: "<< D << '\n';
            cout << "Transferencia realizada con exito. ";
            break;
        default:
            cout << "Usted ha salido del sistema.";
    }
}
