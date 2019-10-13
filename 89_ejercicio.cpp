/*
Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier
numero introducido por el usuario. por ejemplo. si se introduce el numero
256.879, deberia desplegarse el numero 0.879
*/

#include <iostream>
#include <string.h>
using std::cin; using std::cout; using std::endl;

int entero;
float numero;

//-------------------PROTOTIPO DE FUNCIONES-----------------------------
float fraccion(float numero);
void pregunta();

//-------------------MAIN FUNCTION---------------------------------------
int main(){
    pregunta();
    cout<<fraccion(numero)<<endl;

    return 0;
}


//-------------------DEFINICION DE LA FUNCION-----------------------------
void pregunta(){
    cout<<"Digite un numero con decimales: "; cin>>numero;
}

float fraccion(float numero){
    entero=numero;
    return (numero-entero);
}


