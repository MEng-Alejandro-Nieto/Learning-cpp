#include <iostream>
using  namespace std;

int main(){
    int numero;
    
    cout<<"Ingrese un numero entero del 1 al 5: "; cin>>numero;
    
    switch(numero){
        case 1: cout<<"el numero es 1";
        case 2: cout<<"el numero es 2"; 
        case 3: cout<<"el numero es 3"; break;
        case 4: cout<<"el numero es 4"; break;
        case 5: cout<<"el numero es 5"; break;
        default: cout<<"el numero que se ingreso no se encuentra en el rango"; break;

        }
    
    return 0;
    }