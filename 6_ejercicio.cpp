/*
Escriba un programa que lea tres notas de un alumno y calcule el 
promedio
*/

#include <iostream>
using namespace std;

int main(){
    float a,b,c,promedio,resultado;

    cout<<"Ingrese la primera nota: "; cin>>a;
    cout<<"Ingrese la segunda nota: "; cin>>b;
    cout<<"Ingrese la tercera nota: "; cin>>c;

    promedio=(a+b+c)/3;
    cout<<"El promedio de las notas es: "<<promedio<<endl;
    /*
    Ahora suponga que la primera nota tiene un valor del 30%
    la segunda tiene un valor del 60% y la tercera tiene un 
    valor de 10%
    */
    resultado=a*0.3+b*0.6+c*0.1;
    cout<<"El valor ponderado es: "<<resultado<<endl;


    return 0;
}