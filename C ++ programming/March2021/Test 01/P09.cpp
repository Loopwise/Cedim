/*
 *	Elabore un programa en C++ que permita obtener el valor mayor
 *	de dos números con todo lo que hemos visto hasta ahora sin hacer
 *	uso del operador ternario. O sea, solo usando operaciones entre los valores.
 */

#include <iostream>

int main()
{
    // Estas líneas son simplemente para la lectura de los datos.
    int a, b;
    std::cin >> a >> b;
    
    /*
    *   Primero hay que preguntarnos, qué pasa con dos números
    *   si son iguales, su división es igual a 1, si uno es mayor que otro
    *   tenemos dos casos.
    *   mayor/menor > 1 menor/mayor < 1 
    *   Con esto en mente podemos tener en mente que, haciendo enteros a estos valores
    *   tendríamos
    *   int(menor/mayor) = 0    int(mayor/menor) = entero mayor que 1 
    *   Luego, a estos podemos hacer un cambio a booleanos, recordando que solamente será
    *   0 cuando es 0 (caso menor/mayor) y 1 en otro caso (caso mayor/menor).
    *   Ahora volvemos a las variables a y b, de estos dos tendríamos un 0 y un 1 haciendo
    *   todo el proceso anterior, y multiplicando estos por el mismo, en otras palabras:
    *   mayor * bool(int(mayor/menor)) daría el mayor
    *   menor * bool(int(menor/mayor) daría 0
    *   Cambiando a variables, nuevamente
    *   Tendríamos: a * bool(int(a/b) && b * bool(int(b/a)
    *   Como no sabemos cúal es el mayor y cúal da 0, los sumamos y tendríamos solamente el mayor.
    * 
    *   Finalmente, con todo este proceso ya tendríamos la expresión para guardar el valor mayor
    *   en una variable.
    *   int mayor = a * bool(int(a/b) + b * bool(int(b/a);
    */
    
    // Podemos saltarnos la sentencia int ya que igual se están operando dos enteros.
    int mayor = a * bool(a/b) + b * bool (b/a);
    
    // Ahora sumamos a y b y le restamos el menor que sería cualquiera de los dos.
    // Si es a simplemente queda b y si es b simplemente queda a.
    b = a + b - mayor;
    
    // Finalmente al valor de a le asignamos el valor mayor.
    a = mayor;
    
    // De esta manera queda guardado en a el mayor y en b el menor.
    std::cout << "El mayor valor es: " << a << std::endl;
    std::cout << "El menor valor es: " << b << std::endl;
}

