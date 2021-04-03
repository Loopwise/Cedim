#include <iostream>

using namespace std;

int main(){
    int n = 25;
    int p1= 1,p2 =1, aux;
    int c = 2;
    cout << "1 1 ";
    while(1){
        aux = p1 + p2;
        p1 = p2;
        p2 = aux;
        /*
        aux = p2;
        p2 = p1 + p2;
        p1 = aux;
        */
        c++;
    
        if(p2 < 0){
            break;
        }
        
        cout << p2 << " ";
    }
}
