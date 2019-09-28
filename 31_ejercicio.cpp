/*
Hacer un programa que calcule el resultado de la siguiente expresion
(1-2+3-4+5-6...n):
*/

#include <iostream>
#include <math.h>
using std:: cin; using std:: cout; using std:: endl;

int main(){
    int n,resultado{0};
    cout<<"Digite un numero para obtener la siguiente operacion aritmetica\n(1-2+3-4+5-6...n): "; cin>>n;
    for(int i{1};i<=n;i++){
        if (i%2==0){
            resultado=resultado-i;
        }
        else{
            resultado=resultado+i;
        }
    }
    cout<<"El resultado es: "<<resultado;
    return 0;
}









