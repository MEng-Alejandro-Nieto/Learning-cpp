/*
Escriba un programa que lea de la entrada estandar un vector de numeros
y muestra en la salida estandar los numeros del vector con sus indices 
asociadas
*/ 
 
#include <iostream>
using std:: cout; using std:: cin; using std:: endl;


int main(){
    int a;
    cout<<"Cuantos numeros desea ingresar en el arreglo: "; cin>>a;
    int arreglo[a];
    for(int i{0};i<a;i++){
        cout<<"ingrese aca el numero del indice "<<i<<": "; cin>>arreglo[i];
    }
    for (int i{0};i<a;i++){
        cout<<"Numero: "<<arreglo[i]<<endl;
        cout<<"Posicion: "<<i<<endl;
    }
    return 0;
}


 
 
