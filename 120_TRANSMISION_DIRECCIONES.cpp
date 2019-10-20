/*
TRANSMISION DE DIRECCIONES
Ejemplo: Intercambiar el valor de 2 valores
*/
#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////////////
void intercambio(float *,float *);
////////////////////////////////////////////////////////////////////
int main(){
    float num1= 20.8, num2=6.78;
    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"El valor de num2 es: "<<num2<<endl;
    intercambio(&num1,&num2);
    cout<<"Despues del intercambio"<<endl;
    cout<<"El nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl;
    return 0;
}
////////////////////////////////////////////////////////////////////
void intercambio(float *dir1,float *dir2){
    float aux;
    aux=*dir1;
    *dir1=*dir2;
    *dir2=aux;

}



