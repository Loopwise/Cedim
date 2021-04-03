#include <iostream>
/*
Apuntes de la sesion 2 : sentencias de control y repeticion.
Creado por: Andy Montes Chuñocca :^)

------------------------------------Sentencia if---------------------
Cuando nosotros querramos que una sentencia o un conjunto se sentencias se ejecuten siempre
y cuando cumpla una condicion , nosotros usaremos la sentencia if. el formato es:
if(condicion) sentencias;
por ejemplo:
main.cpp-----------------------------------------------------------------
#include <iostream>
int main(){
  bool b=true;
  if(b) std::cout<<"La condicion es verdadera";
}
-------------------------------------------------------------------------
En este caso fue solo una sentecia. Si queremos multiples sentencias, usaremos {}
main.cpp---------------------------------------------------------------
#include <iostream>
int main(){
  bool b=true;
  if(b){
    std::cout<<"Primera sentencia ,Mensaje 1\n";
    std::cout<<"Segunda sentencia ,Mensaje 2\n";
  }
}
-------------------------------------------------------------------------

Hasta aquí vemos las formas en las que se ejecutan las sentencias que cumplan la condicion
, pero podemos agregar un conjunto de sentencias que se ejecuten cuando No cumplan la condicion.
utilizaremos el formato if-else:
if(condicion){
  sentencias;
 }else{
  sentencias_cuando_no_cumpla;
 }
 
main.cpp--------------------------------------------------------------------------
#include <iostream>
int main(){
  bool b=false;
  if(b){
    std::cout<<"La condicion es verdadera\n";//primera sentencia del bloque
    std::cout<<"Esta es una seguna sentencia\n";//segunda sentencia del bloque
  }else{
    std::cout<<"La condicion es falsa\n";//primera sentencia del bloque
    std::cout<<"Esta es una segunda sentencia\n";//segunda sentencia del bloque
  }
}
-------------------------------------------------------------------------------------

En la parte donde va la condicion es un dato booleano, por lo tanto podemos crear una operacion
que designe esa condicion, veamos el siguiente ejemplo

main.cpp--------------------------------------------------------------------------------
#include <iostream>
int main(){
  int x=10;
  if(x>5&&x<15){
      std::cout<<"El valor de x esta entre 5 y 15\n";
  }
  
  bool b=true;
  if(x>5 && b){
      std::cout<<"El valor de x es mayor que 5 y b es verdadero\n";
  }
}
---------------------------------------------------------------------------------


---------------------------------------sentencia Switch

Esta sentencia es similar a tener muchas sentencias if. lo que hace esta sentencia
es EVALUAR una condicion y en base a este valor(entero) ejecuta codigo que este dentro del caso
correspondiente. Si la condicion no se satisface con ningun valor declarado, ejecuta una seccion
llamada default.
La sintaxis general es:
switch(condicion){
  case valor1:
    sentencias;
    break;
  case valor2:
    sentencias;
    break;
  case valor3:
    sentencias;
    break;
  ...
  default:
    sentencias;
    break;
}

Ejemplo simple de como usar la sentencia switch
main.cpp-----------------------------------------------------------------------------
#include <iostream>
int main(){
  int x=3;
  switch(x){
    case 1:
      std::cout<<"El valor de x es 1";
      break;
    case 2:
      std::cout<<"El valor de x es 2";
      break;
    case 3:
      std::cout<<"El valor de x es 3";
      break;
    default:
      std::cout<<"El valor de x no es ninguno de los anteriores";
      break;
  }
}
---------------------------------------------------------------------------------
prueba a borrar algun break y observa que pasa con el programa...
en el bloque switch, x es comparado con cada valor declarado por el programador, si
ninguno coincide se ejecuta la seccion de default



-------------------------------------sentencia for
la sentencia for ejecuta un loop o bucle, este bucle depende de la condicion.
la sintaxis general es:
for(val_inicial;condicion;expresion_iteracion){
  sentencias;
}

main.cpp--------------------------------------------------------------------
int main(){
  for(int i=0;i<10;i++){
    std::cout<<"El contador tiene el valor de ->\b"<<i<<"\n";
  }
}
-------------------------------------------------------------------------------



-------------------------------------sentencia while
la sentencia while ejecuta todo su bloque de sentencias mientras que la condicion sea
verdadero. While <->"mientras"

main.cpp----------------------------------------------------------------------------
#include <iostream>
int main(){
  int x=0;
  while(x<10){//se lee: Mientras x sea menor que 10, entonces se ejecutara....
      std::cout<<"El valor de x es :\b"<<x<<std::endl;
      x++;//sumamos "1" al valor de x
  }//fin del bloque de while
  
}

------------------------------------------sentencia do
la sentencia do a diferencia de while se ejecutara almenos una sola vez
ya que el orden se invierte
en el ciclo while:"mientras se cumpla la condicion entonces se ejecuta...."
ciclo do: "se ejecuta , ahora si la condicion es verdadera se ejecuta nuevamente...."

main.cpp---------------------------------------------------------
#include <iostream>
int main(){
  int x=0;
  do{
      std::cout<<"El valor de x es :\b"<<x<<std::endl;
  }while(x<10);
}
---------------------------------------------------------

Nota: comparar los dos ultimos codigos y ver las diferencias entre el ciclo do y el ciclo while
*/
int main(){

  return 0;
}
