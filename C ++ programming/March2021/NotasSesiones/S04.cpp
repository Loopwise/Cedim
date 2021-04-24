#include <iostream>
#include <string>
int main(){
    std::string miString;//creacion de la variable miString
    //std::cout<<"ingrese un dato"<<std::endl;
    //std::getline(std::cin,miString);
    //std::cout<<"ud ingreso:\n";
    //std::cout<<miString<<std::endl;
    //acceder a un dato dentro del string
    //std::cout<<miString.at(1);

    miString="hola";
    std::string str2;
    std::string str3;
    str2=" has venido sola?";
    str3=" o estas de pasadita";

    std::cout<<miString<<std::endl;
    std::cout<<str2<<std::endl;
    std::cout<<str3<<std::endl;

    miString= miString+str2+str3;
    std::cout<<"el resultado de mi operacion es:\n";
    std::cout<<miString<<std::endl;
    //acceder a un caracter de mi string
    //miString[2];
    //miString.at(2);
    //empleo de la comparacion
    if(str2==" has venido sola?"){
        std::cout<<"Si es igual\n";
    }else{
        std::cout<<"no es igual\n";
    }
    //empleo de los indices para substrings

    std::string strRecortado;
    strRecortado=miString.substr(0,8);
    std::cout<<strRecortado<<std::endl;
}






#include <iostream>
int main(){
    int v_entera_1=13;
    //punteros
    int *p;
    p=&v_entera_1;
    std::cout<<p<<"\n";
    //arrays


    //cadenas
    std::string st1="Hola mundo :D";
    std::cout<<st1<<std::endl;
    //concatenar strings
    st1+=" desde mi casita";
    std::cout<<st1<<std::endl;
    //concatenar char
    char signo='!';
    st1+=signo;
    std::cout<<st1<<"\n";
    //otra forma de concatenar strings
    std::string st3,st2=" wiiii ";
    st3=st2+st1;
    std::cout<<st1;
    //mediante funcion accedemos a un caracter
    char c1=st1[0];
    char c2=st1.at(0);
    std::cout<<"el primer caracter es: "<<c2<<" - "<<"c1"<<"\n";
    //string se pueden comparar
    //string input
    std::string in_string;
    std::cout<<"ingrese una cadena literal: ";
    std::getline(std::cin,in_string);
    std::cout<<"ingreso la cadena =>\b "<<in_string<<"\n";
    //substrings
    //s.substr(6,78)
    //buscar un string
    std::string cadena_para_encontrar="mun2do";
    std::string::size_type posicion=st1.find(cadena_para_encontrar);
    
    std::cout<<posicion;

    auto variable=std::string::npos;//mayor valor posible para un elemento de tipo size_type
    std::cout<<variable;
}









#include <iostream>

int main(){
    // tipo_Datos_almacena + nombre + num de elemtnos
    //declaracion de los arrays
    int miArray[5];
    int miArray2D[3][3];
    int miArray3D[3][3][3];


    //inicializacion de los arrays
    //miArray[5]
    //    |    |    |    |
    miArray[0]=1;
    miArray[1]=2;
    miArray[2]=3;
    miArray[3]=4;
    miArray[4]=5;
    miArray[5]=6;
    for(int i=0;i<6;i++){
        std::cout<<miArray[i]<<std::endl;
    }
    
}



#include <iostream>
void funcion_suma(int valorDado);//prototipo , el param es un entero
void funcion_suma2(int *valorPuntero);//en este prototipo el unico parametro es un puntero
int main(){

    int num_1=15;
    //objeto llamado num_1
    //variable
    //1. valor
    std::cout<<num_1<<std::endl;
    //2. tiene una direccion
    std::cout<<&num_1<<std::endl;
    std::cout<<"Ahora ejecutamos la funcion suma:"<<std::endl;
    funcion_suma(num_1);
    std::cout<<"el valor de num1 despues de ejecutar la funcion es "<<num_1<<std::endl;


    std::cout<<"Ahora ejecutamos la funcion suma con punteros:"<<std::endl;
    //creamos un puntero para num_1
    int*p;//creamos un puntero
    p=&num_1;//le damos el valor a nuestro puntero
    funcion_suma2(p);
    std::cout<<"el valor de num1 despues de ejecutar la nueva func es: "<<num_1<<std::endl;
}
void funcion_suma(int valorDado){//se define el cuerpo de la funcion
    //le damos valor por COPIA
    valorDado=valorDado+55;
    std::cout<<valorDado<<std::endl;
}
void funcion_suma2(int *valorPuntero){
    //operaciones con el puntero p
    //p : direccion
    //*p: el valor de la variable que tiene la ubicacion ya entregada.
    *valorPuntero=*valorPuntero+55;
    std::cout<<*valorPuntero<<std::endl;
}
