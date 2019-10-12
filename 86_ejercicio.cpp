/*
Escriba una funcion llamada mult() que acepte dos numeros en punto
flotante como parametro, multiplique estos dos y despliegue el resultado
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

//PROTOTIPO DE FUNCION
template<class TIPO>
void mult(TIPO x, TIPO y);


int main(){
    float x,y;
    cout<<"Ingrese dos numeros a multiplicar: ";cin>>x>>y;
    mult(x,y);


    return 0;
}

//DEFINICION DE LAS FUNCIONES
template<class TIPO>
void mult(TIPO x, TIPO y){
    cout<<x*y;
}











