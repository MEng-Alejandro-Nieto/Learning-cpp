/*
Escriba un programa que calcule el valor de: 2^1+2^2+2^3+2^4+2^5+...2^n 
*/

#include <iostream>
#include <math.h>
using std:: cout; using std:: cin; using std:: endl;

int main(){
    int resultado{0},n;
    cout<<"Digite el valor de n para calcular la siguiente operacion\n(2^1+2^2+2^3+2^4+2^5+...2^n): "; cin>>n;
    for(int i{1};i<=n;i++){
        resultado=resultado+pow(2,i);

    }
    cout<<"El resultado de la sumatoria es: "<<resultado;
}












