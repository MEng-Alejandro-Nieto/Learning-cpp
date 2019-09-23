/*
Escribe un programa que lea de la entrada estandar el precio de un 
producto y muestre en la salida estandar el precio del producto al
aplicarla el iva
*/

#include <iostream>;
using namespace std;


int main(){
    float a=0,iva=1.15,b=0;; 
    cout<<"Cual es el precio del producto ? ";
    cin >>a;
    b=a*iva;
    cout<<"El precio a pagar con iva es de: "<<b<<endl;

    return 0; 

}















