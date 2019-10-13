/*
Escriba una funcion llamada funpot() que eleve un numero entero que 
se le traasmita a una potencia en numero entero positivo y despliegue
el resultado. El numero entero positivo debera ser el segundo valor
transmitido a la funcion.
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

//DEFINIENDO VARIABLES GLOBALES
float x,y;


//                          PROTOTIPO DE FUNCION
//-----------------------------------------------------------------------
void pregunta();
template <class TIPO>
void funpot(TIPO base,TIPO exponente);



int main(){
    pregunta(); cin>>x>>y;
    funpot(x,y);
    return 0; 
}





//                      DEFINIENDO LAS FUNCIONES
//-----------------------------------------------------------------------
void pregunta(){
    cout<<"Ingrese la base y la potencia: ";
}
//-----------------------------------------------------------------------
template <class TIPO>
void funpot(TIPO base,TIPO exponente){
    int aux=base;
    if(exponente==0){
        cout<<1;
    }
    else{
        for(int i=2;i<=exponente;i++){

            base=aux*base;
        }
        cout<<base;
    }
}
//-----------------------------------------------------------------------






