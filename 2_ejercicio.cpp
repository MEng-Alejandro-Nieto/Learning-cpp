/*
Realice un programa que lea de la entrada estandar los siguientes
datos de una persona
    edad: dato de tipo entero
    sexo: dato de tipo caracter
    altura en metros: dato de tipo real
tras leer los datos el programa debe mostrarlos en la salida estandar
*/



#include <iostream>

using namespace std;

int main(){
int edad=0;
float altura=0;
char sexo[10];

cout<<"cual es tu edad: ";              cin>>edad;
cout<<"cual es tu altura(m): ";   cin>>altura;
cout<<"cual es tu sexo: ";        cin>>sexo;

cout<<endl;

cout<<"la edad es: "<<edad<<endl;
cout<<"la altura es de: "<<altura<< " m"<<endl;
cout<<"el sexo es: "<<sexo<<endl;

}