/*
Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del
valor que se le transmite y despliega el resultado. la funcion debera
ser capaz de elevar al cuadrado numeros flotantes.
*/


#include <iostream>
using std::cin; using std::cout; using std::endl;

//PROTOTIPO DE FUNCION
void preguntar();
template <class TIPO>
void al_cuadrado(TIPO x);

int main(){
    int x;
    preguntar(); cin>>x; cout<<endl;
    al_cuadrado(x);

    return 0;
}



//DEFINICION DE LAS FUNCIONES

void preguntar(){
    cout<<"Que Numero desea elevar al cuadrado: ";
}
template <class TIPO>
void al_cuadrado(TIPO x){
    cout<<x*x;
}















