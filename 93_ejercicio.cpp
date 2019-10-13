/*
Intercambiar el valor de 2 variables utilizando paso de parametros 
por referencia
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;


//-------------------------------------------------------------
template <class TIPO>
void cambio(TIPO& num1, TIPO& num2 );
//-------------------------------------------------------------
int main(){
    int num1, num2;
    cout<<"Ingrese dos numeros: "; cin>>num1>>num2;

    cout<<"los parametros entraron siendo: "<<num1<<" y "<<num2<<endl;
    cambio(num1,num2);
    cout<<"Y ahora salen siendo: "<<num1<<" y "<<num2<<endl;

    return 0;
}



//-------------------------------------------------------------
template <class TIPO>
void cambio(TIPO& num1,TIPO& num2){
    float aux;
    aux=num1;
    num1=num2;
    num2=aux;
}



//-------------------------------------------------------------