#include <iostream>

int main()
{
    // Estas líneas son simplemente para la lectura de los datos.
    int a, b;
    std::cin >> a >> b;
    
    int mayor = (a > b) ? a : b; // Aquí vamos a guardar el mayor de los dos datos
    /*
    * Como no sabemos si a es mayor o b es mayor
    * simplemente sumamos ambos y le restamos el mayor
    * que se ha guardado en la variable mayor.
    */
    b = a + b - mayor;

    // Como nos piden no cambiar el resto del código
    // el valor mayor necesariamente tiene que estar
    // almacenado en la variable a.
    a = mayor;
    // De esta manera queda guardado en a el mayor y en b el menor.
    std::cout << "El mayor valor es: " << a << std::endl;
    std::cout << "El menor valor es: " << b << std::endl;
}

