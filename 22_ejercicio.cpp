/*
Reralice un programa que lea de la entrada estandar numero
hasta que se introduzca un cero. En ese momento el programa 
debe terminar y mostrar en la salida estandar el numero de 
valores mayores que cero leidos
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

int i,conteo=0;
cout<<"ingrese una serie de numeros, el programa se detendra\nuna vez ingrese el numero 0 y mostrara en pantalla la cantidad\nde numeros ingresados mayores a cero: ";

do{
    cin>>i; conteo++;
}while(i!=0);

cout<<conteo-1;
}







