/*
 *	Elabore un programa en C++ que permita obtener el valor mayor
 *	de dos n�meros con todo lo que hemos visto hasta ahora sin hacer
 *	uso del operador ternario. O sea, solo usando operaciones entre los valores.
 */

#include <iostream>

int main()
{
    // Estas l�neas son simplemente para la lectura de los datos.
    int a, b;
    std::cin >> a >> b;
    
    /*
    *   Primero hay que preguntarnos, qu� pasa con dos n�meros
    *   si son iguales, su divisi�n es igual a 1, si uno es mayor que otro
    *   tenemos dos casos.
    *   mayor/menor > 1 menor/mayor < 1 
    *   Con esto en mente podemos tener en mente que, haciendo enteros a estos valores
    *   tendr�amos
    *   int(menor/mayor) = 0    int(mayor/menor) = entero mayor que 1 
    *   Luego, a estos podemos hacer un cambio a booleanos, recordando que solamente ser�
    *   0 cuando es 0 (caso menor/mayor) y 1 en otro caso (caso mayor/menor).
    *   Ahora volvemos a las variables a y b, de estos dos tendr�amos un 0 y un 1 haciendo
    *   todo el proceso anterior, y multiplicando estos por el mismo, en otras palabras:
    *   mayor * bool(int(mayor/menor)) dar�a el mayor
    *   menor * bool(int(menor/mayor) dar�a 0
    *   Cambiando a variables, nuevamente
    *   Tendr�amos: a * bool(int(a/b) && b * bool(int(b/a)
    *   Como no sabemos c�al es el mayor y c�al da 0, los sumamos y tendr�amos solamente el mayor.
    * 
    *   Finalmente, con todo este proceso ya tendr�amos la expresi�n para guardar el valor mayor
    *   en una variable.
    *   int mayor = a * bool(int(a/b) + b * bool(int(b/a);
    */
    
    // Podemos saltarnos la sentencia int ya que igual se est�n operando dos enteros.
    int mayor = a * bool(a/b) + b * bool (b/a);
    
    // Ahora sumamos a y b y le restamos el menor que ser�a cualquiera de los dos.
    // Si es a simplemente queda b y si es b simplemente queda a.
    b = a + b - mayor;
    
    // Finalmente al valor de a le asignamos el valor mayor.
    a = mayor;
    
    // De esta manera queda guardado en a el mayor y en b el menor.
    std::cout << "El mayor valor es: " << a << std::endl;
    std::cout << "El menor valor es: " << b << std::endl;
}

