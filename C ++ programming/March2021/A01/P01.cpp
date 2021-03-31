/*
    Un móvil va a velocidad 'v' (m/s) y en un tiempo 't' (s)
    imprima cuántos metros ha recorrido.
    
    Y tiene una aceleración 'a' (m/s²) que cambia con el tiempo en 'p' (m/s³).
*/
#include <iostream>

int main() {
    float v,t,d;
    std::cout<<"escriba la velocidad en m/s : ";std::cin>>v;
    std::cout<<"escriba el tiempo en segundos: ";std::cin>>t;

    d=v*t;
    std::cout<<"la distancia recorrida es:  "<<d;



    return 0;
}
