#include <iostream>
//incluimos la bibliotema iostream ="istream"+"ostream"
//bibliotecas, librerias: extraccion de codigo externo.
//las bibliotecas son colecciones de codigo utiles que puede importar a sus programas para evitar tener que "reinventar la rueda"
int main(){
    //Un programa de C ++ debe tener una única función global llamada main ().
    // El programa comienza ejecutando main (). El tipo de retorno de main () es int
    // (void no es una alternativa conforme).
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

    std::cout<<"\t\tEnteros:"<<std::endl;
    std::cout<<v1<<" "<<v2<<" "<<v3<<" "<<" "<<v4<<" "<<v5<<" "<<v6<<" "<<v7<<"\n";
    std::cout<<std::showbase<<std::dec;
    std::cout<<v1<<" "<<v2<<" "<<std::oct<<v3<<" "<<std::hex<<v4<<" "<<std::dec<<v5<<" "<<v6<<" "<<v7<<"\n";
    //---------------------------Literales de punto flotante
    //contiene un punto decimal(.), o un exponente (e3)
    //formatos:
    //fixed
    //scientific
    //defaultfloat
    long double v8=123.123456789;//uso de 4bytes de precision
    float v9=123.123456789;// uso de 8 bytes de precision
    std::cout<<"\t\tDobles y flotantes:"<<std::endl;
    std::cout<<v8<<" "<<v9<<"\n";
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


    //--------------asignacion
    int n1=12;
    int n2,n3;
    n2=n3=n1;

}
