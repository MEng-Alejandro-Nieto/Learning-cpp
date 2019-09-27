/*
Escriba un programa que calcule x^y donde tanto x como y son enteros positivos,
sin utilizar la funcion pow.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x{0},y{0},resultado{1};
    cout<<"Se calculara x^y."<<endl;
    cout<<"Introduzca el valor de x: "; cin>>x;
    cout<<"Introduzca el valor de y: "; cin>>y;
    for (int i{1};i<=y;i++){
        resultado=resultado*x;
        cout<<resultado<<endl;
    }

}








