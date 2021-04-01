#include <iostream>
/*
Notas creadas por : Andy Montes Chuñocca :^)

Funciones:
nuestro codigo de c++ podemos dividirlo en pequeñas partes llamadas funciones. una funcion retorna un tipo de dato (type). tienen nombre, una lista de parametros y adicionalmente el cuerpo de la funcion o conjunto de sentencias que definen esa funcion.

una funcion simple tiene la forma:

type_retorna nombre_funcion(argumentos){
	sentencia1;
	sentencia2;
	return algo;
}

Para crear funciones necesitamos definir obligatoriamente el tipo de dato que retorna la funcion, darle un nombre y opcionalmente una lista de parametros. 
Para declarar una funcion sin parametros debemos declarar un "prototipo".
main.cpp--------------------------------------------------
void miFuncionVacia();
int main(){
}
-------------------------------------------------------------
Al ser una funcion de tipo void, no retornará nada. luego hay que definir el cuerpo de la función. Quedando por lo tanto el siguiente ejemplo:

main.cpp---------------------------------------------------
#include <iostream>
void miFuncionVacia();
int main(){
	miFuncionVacia();// al agregar esta sentencia , solo                //invocamos a que se ejecute.
}
void miFuncionVacia(){// este bloque se conoce como definicion
	std::cout<<"Mensaje desde la funcion vacia, Sin retorno";
}
-----------------------------------------------------------

Ahora definiremos una funcion que sí necesita de parametros.

main.cpp--------------------------------------
#include <iostream>
int funcionCuadrado();//creamos el prototipo de una func que retorna
			//un valor entero
int main(){
	int num1, resultado;
	//pedimos ingresar al usuario un dato de tipo entero
	std::cout<<"Ingrese un numero entero \n";
	//ahora debemos almacenarlo en algun objeto que corresponda
	//con su tipo de dato
	std::cin>>num1;


	resultado=funcionCuadrado(num1);
// cuando ejecutamos la funcion se debe retornar un valor,
// por lo tanto, ese valor no debe
// estar en el aire, debemos almacenarlo en algun objeto, en esta //caso en la variable llamado "resultado", y el almacenamiento es //exitoso porque corresponde sus tipos de datos int guardado en int

//si queremos ver el valor de la variable resultado, lo 
//mandamos a la consola mediante:
	std::cout<<resultado;

}
int funcionCuadrado(int n){//aqui definimos nuestra funcion
	return n*n;
}
-------------------------------------------------------------------

Es muy importante tener en cuenta la sentencia de return . ya que nuestra funcion puede tener multiples sentencias de retorno. analizar el siguiente programa que tiene una funcion con dos tipos de retorno.


main.cpp-------------------------------------------------
#include <iostream>
int multipleRetorno(int x);//declaracion del prototipo
int main(){
	std::cout<<"El valor de la funcion es: "<<multipleretorno(25);
}
int multipleRetorno(int x){
	if (x>=42){
		return x;
	}else{
		return 0;
	}
}

------------------------------------------------------------
*/



int main(){
	solicitarContra();	
	ejecutarMenu();
	system("clear");
	system("pause");
	return 0;
}