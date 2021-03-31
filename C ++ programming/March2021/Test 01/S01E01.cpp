#include <iostream>
/*
* Notas creadas por: Andy Montes Chuñocca :^)
* incluimos la bibliotema iostream ="istream"+"ostream"
* bibliotecas, librerias: extraccion de codigo externo.
* las bibliotecas son colecciones de codigo utiles que puede importar a sus programas para evitar tener que "reinventar la rueda"
* 
*/
int main(){
    //Un programa de C ++ debe tener una única función global llamada main ().
    // El programa comienza ejecutando main (). El tipo de retorno de main () es int
    // (void no es una alternativa conforme).
    
    std::cout<<"Primer programa en lenguaje C++"<<std::endl;
    // -------------- el operador (::)
    // tiene el nombre de operador de resolución de alcance ubicuo. Se utiliza para acceder
    // a miembros de espacios de nombres, como datos, funciones, clases y estructuras.
    // -------------- std::cout
    // significa que el OBJETO cout del ESPACIO DE NOMBRES(namespace) std.
    // std es la notación del espacio de nombres de la biblioteca estándar.
    // -------------- forma general del operador (::)
    // namespace_name :: member_name        N::m
    // class_name :: member_name            C::m
    // struct_name :: member_name           S::m
    // Namespace::Class::member             N::C::m
    
    
    // los literales de cadena son los mensajes que mandamos a imprimir con el objeto cout
    std::cout<<"Este es un literal de cadena "<<std::endl;
    sdt::cout<<"Este es otra forma"<<" de imprimir literales de cadena"<<" esto es correcto"<<std::endl;
    std::cout<<"Otra forma"" de asociar literales de cadena" ", no produce error"<<std::endl;
    
    
    // ------------------- IDENTIFICADORES
    //comienzan con una letra,o un guion bajo seguido de digitos,numeros,letras,o guiones bajos.
    // recomendacion: los que comienzan con guion abajo o tienen doble subrayado estan reservados
    // para el uso de implementacion. No los use.
    std::cout<<"Declarando Variables"<<std::endl;
    //-------------------------------enteros
    //decimales
    int v1=10,v2=15;
    //octales
    int v3=012;//1*8+2=10
    //hexadecimales
    int v4=0x123;//1*16^2+2*16+3=291
    //binarios, standar C++14
    int v5=0b101,v6=0B111;// v5=1*2^2+0*2+1=5; v6=1*2^2+1*2+1=7
    //enteros largos
    unsigned long int v7=1'000'000;// se puede agregar apostrofes (standar C++14)

    std::cout<<"\t\tPor default se imprime Enteros:"<<std::endl;
    std::cout<<v1<<" "<<v2<<" "<<v3<<" "<<" "<<v4<<" "<<v5<<" "<<v6<<" "<<v7<<"\n";
    
    // observe el formato de salida cuando le agregamos :
    std::cout<<"Modificando el Formato 1.0"<<std::endl;
    std::cout<<std::dec<<v1<<" "<<v2<<" "<<std::oct<<v3<<" "<<std::hex<<v4<<" "<<std::dec<<v5<<" "<<v6<<" "<<v7<<"\n";
    
    //Ahora:
    std::cout<<"Modificando el formato 2.0"<<std::endl;
    std::cout<<std::showbase<<std::dec;
    std::cout<<v1<<" "<<v2<<" "<<std::oct<<v3<<" "<<std::hex<<v4<<" "<<std::dec<<v5<<" "<<v6<<" "<<v7<<"\n";
    
    //---------------------------Literales de punto flotante
    //contiene un punto decimal(.), o un exponente (e3)
    //formatos:
    //fixed
    //scientific
    //defaultfloat
    // paara acceder a estos formatos , agregar a la cadena literal <<std::
    float v9=123.12789; // conocido como "short double".uso de 4 bytes de precision
    double v8=123.12789; //uso de 8 bytes de precision
    std::cout<<"\t\tDobles y flotantes:"<<std::endl;
    std::cout<<v8<<" "<<v9<<"\n";
    
    std::cout<<"Modificando el formato de los flotantes\n";
    std::cout<<std::defaultfloat<<v8<<" <-> "<<std::fixed<<v8<<" <-> "<<std::scientific<<v8<<"\n";
    
    
    //---------------------------------Caracteres especiales o literales
    //nueva linea                   \n
    //tab horizontal                \t
    //tab vertical                  \v
    //barra espaciadora             \b
    //retorno de carril             \r
    //alerta                        \a
    //backslash                     \\
    //signo interrogacion           \?
    //comilla simple                \'
    //doble comilla                 \"
    //numero octal                  \ooo
    //num hexadecimal               \xhhh
    // el caracter especial se representa como 'nombre C++'
    //'\n': nueva linea
    // los caracteres especiales pueden aparecer en las cadenas literales


    //---------------------Boleanos
    bool bandera1=5>7;
    std::cout<<"\t\tBooleanos"<<std::endl;
    std::cout<<bandera1<<"\n";

    
    //---------------operaciones entre literales
    //literales: son los valores que asignamos a las variables
    // int a=12. en esta sentencia el literal es entero (12)
    // bool b=true. en esta sentencia el literal es boleano(true o 1)
    //......
    //las operaciones que se pueden hacer entre estos literales son:
    
    //---------------------------------Asignación
    char miChar='c'; // define un identificador o variable de nombre miChar y 
                    //le ASIGNAMOS(en este caso tambien inicializamos) el valor de c
    miChar='z';// ASIGNAMOS un nuevo valor a la variable miChar
    
    int x_1=123;// definimos una variable de nombre x_1 y lo inicializamos
                // asignandole el valor de 123
    x_1=456;// le asignamos un nuevo valor a la variable x_1
    
    //-------------------------------Operadores aritmeticos
    // + suma
    // - sustraccion
    // * multiplicacion
    // / division
    // % modulo(resto)
    // si nuestras variables fuese v1=13, v2=2, entonces las operaciones serían:
    // v1+v2 = 13+2=15
    // v1-v2=13-2=11
    // v1*v2= 26
    // v1/v2=6 (el resultado por defecto es 6, valor entero)
    // v1%v2=1 (el resto o módulo de 13 y 2 es 1)
    
    
    //-----------------------------Asignaciones Compuestas
    // creamos una variable "x" y le damos un valor cualquiera
    int x=123;
    // se dice asignaciones compuestas  cuando usamos las expresiones:
    // += adicion compuesta
    // -= resta compuesta
    // *= multiplicacion compuesta
    // /= division compuesta
    x+=10;// esto es igual a x=x+10
    x-=10; // esto es igual a x=x-10
    x*=2;// esto es igual a x=x*2
    x/=3;// esto es igual a x=x/3
    
    //---------------------------------Operadores de incremento y decremento
    // ++x          operador de pre incremento 
    // x++          operador de post incremento
    // --x          operador de pre incremento
    // x--          operador de post incremento
    /*
    La diferencia entre los dos, además del mecanismo de implementación (en términos muy generales)
    , es que con el operador de preincremento, primero se agrega un valor de 1. Luego, se evalúa / accede al
    objeto en expresión. Con el incremento posterior, primero se evalúa / accede al objeto y, después, 
    se agrega el valor de 1. Para la siguiente declaración que sigue, no hace ninguna diferencia. El valor 
    del objeto es el mismo, independientemente de la versión del operador que se haya utilizado. La única 
    diferencia es la sincronización en la expresión donde se usa.
    */
    x=124;
    x++; //agrega 1 al valor de x
    ++x;//agrega 1 al valor de x
    x--;//resta 1 al valor de x
    --x;//resta 1 al valor de x
    
    //--------------------- operadores logicos
    // retornan unicamente valores booleanos
    // &&, ||, !
    // &&: es el operador "y" logico
    // ||: es el operador "o" logico
    // !: operador de "negacion"
    // true && true =true
    // true && false=false
    // true || false=true
    // !true=false
    
    //-------------------operadores relaciones
    //retornan valores booleanos (true o false)
    // <,>,<=,>=,==, !=
    // 5>3: retorna un valor de true
    // 5>=5: retorna un valor de true
    // 10<1 : retorna un valor de false
    // 10==10: retorna un valor de true, este operador es de comparar si son igualdad
    // 10!=6: retorna un valor de true, este operador es comparar si son diferentes
    
}
