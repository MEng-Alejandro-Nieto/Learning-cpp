/*
Escribe un programa que defina un vector y muestre en la 
salida estandar el vector en orden inverso del ultimo 
al primer elemento
*/

#include <iostream>
using std:: cin; using std:: cout; using std:: endl;

int main (){
int a;
    cout<<"Cuantos numeros desea ingresar en el arreglo: "; cin>>a;
    int arreglo[a];
    for(int i{0};i<a;i++){
        cout<<"ingrese aca el numero del indice "<<i<<": "; cin>>arreglo[i];
    }
    cout<<"El arreglo invertido es: "<<endl;
    for (int i{0};i<5;i++){
        cout<<"Posicion: "<<i<<endl;
        cout<<"Numero: "<<arreglo[4-i]<<endl;
    }
    return 0;
}



