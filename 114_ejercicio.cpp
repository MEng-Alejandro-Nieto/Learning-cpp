/*
Comprobar si un numero es par o impar, y senalar la posicion de memoria
donde se esta guardando el numero con punteros.
*/


#include <iostream>
using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////////////
int n{0},*dir_n=&n;
///////////////////////////////////////////////////////////////////
void pregunta();
void par(int);
///////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    par(n);
    return 0;
}
///////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Ingrese un numero para comprobar si es par: "; cin>>n;
}
void par(int n){
    if(*dir_n%2==0){
        cout<<"El numero "<<*&n<< " es par y esta ubicado en "<<&n;
    }
    else{
        cout<<"El numero "<<*&n<< " es impar y esta ubicado en "<<&n;
    }
    
}