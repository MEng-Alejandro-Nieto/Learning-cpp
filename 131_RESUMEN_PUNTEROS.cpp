// pointers en estructuras tipo 'int'

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    //PUNTEROS CON VARIABLES TIPO int 
    int variable=1;
    int *dir_variable=&variable;

    cout<<dir_variable<<endl;
    cout<<*dir_variable<<endl;    
    // Si cambio el valor de variable e imprimo  nuevamente el puntero
    variable=2;
    cout<<dir_variable<<endl;
    cout<<*dir_variable<<endl;  
    cout<<variable<<endl;
    //Si cambio el valor del puntero e imprimo nuevamente
    *dir_variable=3;
    cout<<dir_variable<<endl;
    cout<<*dir_variable<<endl;      
    cout<<variable<<endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    //PUNTEROS CON VARIABLES TIPO CHAR
    cout<<"AHORA PUNTEROS CON VARIABLES TIPO CHAR"<<endl;
    char nombre[30]="Hola",*dir_nombre=nombre;
    cout<<dir_nombre<<endl;
    cout<<*(dir_nombre)<<endl;
    cout<<*(dir_nombre+1)<<endl;
    cout<<*(dir_nombre+2)<<endl;
    cout<<*(dir_nombre+3)<<endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    //PUNTEROS CON VARIABLES TIPO array
    cout<<"PUNTEROS CON VARIABLES TIPO ARRAY"<<endl;
    float arreglo[30]={1,3,4,6,7,9,10,12,14,16,18,20},*dir_array=arreglo;
    cout<<dir_array<<endl;
    cout<<*dir_array<<endl;
    cout<<*(dir_array+1)<<endl;
    cout<<*(dir_array+2)<<endl;
    return 0;
}