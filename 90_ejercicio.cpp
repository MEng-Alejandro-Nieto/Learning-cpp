/*
Escriba una plantilla de funcion llamada despliegue() que despliegue 
el valor del argumento unico que se le transmite cuando es invocado
la funcion
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

//-------------------------PROTOTIPO DE FUNCIONES-------------------------

template<class TIPO>
void despliegue(TIPO valor);
//-------------------------MAIN FUNCTION----------------------------------
int main(){
    int dato1=123456;
    float dato2= 123.789456789123789;
    double dato3= 123.456789;
    char dato4[10]="Hola";

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);
    return 0;
}

//-------------------------DEFINICION DE FUNCIONES------------------------
template<class TIPO>
void despliegue(TIPO valor){
    cout<<valor<<endl;
}