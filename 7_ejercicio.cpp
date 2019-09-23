/*
Escriba un programa que lea de la entrada estandar los dos catetos
de un triangulo rectangulo y escriba en la salida esandar su 
hipotenusa
*/

#include <iostream>
#include<math.h>
using namespace std;

int main(){
    float cateto_1,cateto_2,hipotenusa=0;

    cout<<"ingrese el primer cateto: "; cin>>cateto_1;
    cout<<"ingrese el segundo cateto: "; cin>>cateto_2;

    hipotenusa=sqrt((pow(cateto_1,2)+pow(cateto_2,2)));
    cout.precision(4);
    cout<<"La hipotenusa es: "<<hipotenusa<<endl;
    return 0;
}









