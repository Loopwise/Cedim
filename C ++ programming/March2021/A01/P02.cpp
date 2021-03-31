/*
    Programa que calcula el área mediante la fórmula de Herón.
    
    Tarea: Hallar el lado faltante de un triángulo dado
    dos lados y el ángulo opuesto.
*/

#include <iostream>

// Importamos la librería math.h para usar potencias
#include <math.h>

using namespace std;

int main() {
    // Leemos los lados del triángulo.
    float a,b,c;
    cout << "Ingrese los lados del triángulo: ";
    cin >> a >> b >> c;
    
    // Declaramos el semiperímetro
    float s = 1.0*(a+b+c)/2;
    
    // Crear la variable área
    // pow(numero, potencia) = numero^potencia
    float Area = pow(1.0*s*(s-a)*(s-b)*(s-c), 0.5);
    
    cout << "El area es: " << Area;
    
    return 0;
}
