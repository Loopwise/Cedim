#include <iostream>
#include <cmath>
/*
Ejemplo de aplicación con el uso de while,switch, do while, e introduccion a funciones: void, int,recursividad
Creado por: Andy Montes Chuñocca :D

crearemos una calculadora básica, que contenga las operaciones de: potencia, multiplicacion,
 division, suma, resta y factorizacion
*/
void solicitarContra();
void ejecutarMenu();
void imprimirMensajeDespedida();
void programaCalculadora();
int factorial(int x);
int main(){
    std::cout<<"\n\t\t\t Bienvenido a mi Programa -Calculadora- v 1.0\n";
    solicitarContra();//Primero se solicita el ingreso de una contraseña determinada
    //se tiene como maximo 3 intentos, si se falla se sale del programa. continuando con el return 0

    return 0;
}


void solicitarContra(){
    long int contraIngresada=000000;
    int intento=0;
    while(contraIngresada!=123456){
        if(intento==3){
            std::cout<<"\nSaliendo del programa . . .\n";
            system("pause");
            system("cls");
            break;
        }
        if(intento>=1){
            std::cout<<"\nTenga cuidado, le queda "<<3-intento<<" intento\n";
        }
        std::cout<<"\nIngrese contrasenia ->";
        std::cin>>contraIngresada;
        intento++;//sumamos 1 al valor del intento
        system("cls");
    }
    if(contraIngresada==123456){
        std::cout<<"\nBienvenido a mi programa !!!!!!!!!!!!!!! :D\n";
        system("pause");
        system("cls");
        ejecutarMenu();
        system("cls");
        imprimirMensajeDespedida();
        system("pause");
    }
}

void ejecutarMenu(){
    short int opcion;
    bool banderaMenu=true;
    while(banderaMenu){
        std::cout<<"\nIngrese programa a ejecutar:\n";
        std::cout<<"1. Programa Calculadora\n";
        std::cout<<"2. Salir\n";
        std::cin>>opcion;
        switch(opcion){
            case 1:
                system("cls");
                programaCalculadora();
                break;
            case 2:
                banderaMenu=false;
                break;
            default :
                break;
        }
    }
}

void imprimirMensajeDespedida(){
    std::cout<<"\n";
    std::cout<<"        /\\_/\\ \n"<<
             "   ____/ o o \\ \n"<<
             " /~____  =^= / \n"<<
             "(______)__m_m)"<<std::endl;
    std::cout<<"Vuelva Pronto . . .\n\n";
}

void programaCalculadora(){
    bool bandera=true;
    long double numero1,numero2,resultado;
    char operacion;
    do {
        std::cout << "\n---------Calculadora Basica ---------";
        std::cout << "\nEntradas validas:\n";
        std::cout << "\n ->2+5\n ->2*5\n ->2^5\n ->2/5\n ->2-5\n ->2!\n";

        std::cout << "\nIngrese la operacion a realizar: \n";
        std::cout << "\nnota: Si ingresa 0/0 , saldra del programa automaticamente\n";
        std::cout << "\n\b->\b";
        std::cin >> numero1 >> operacion>>numero2;
        if(operacion=='!'){
            int num1=numero1;
            std::cout<<" = "<<factorial(numero1)<<std::endl;
            system("pause");
            system("cls");
            continue;
        }
        if(numero1==0&&operacion=='/'&&numero2==0){
            bandera=false;
            continue;
        }else{
            switch (operacion) {
                case '+':
                    resultado = 1.0 * (numero1 + numero2);
                    break;
                case '-':
                    resultado = 1.0 * (numero1 - numero2);
                    break;
                case '*':
                    resultado = 1.0 * (numero1 * numero2);
                    break;
                case '/':
                    resultado = 1.0 * (numero1 * numero2);
                    break;
                case '^':
                    resultado = 1.0 * pow(numero1, numero2);
                    break;
                default:
                    std::cout << "\nOperacion invalida, ingrese los datos correctamente";
                    break;

            }//fin del switch
        }//fin del if-else
        std::cout<<" = "<<resultado;
        std::cout<<"\n";
        system("pause");
        system("cls");

    }while(bandera);
    std::cout<<"\n Usted salio de la calculadora\n";
    system("pause");
    system("cls");
}
int factorial(int x){
    if(x==0){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}
