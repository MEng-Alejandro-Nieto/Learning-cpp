/*
Hacer un estructura llamada alumno, en la cual se tendran los siguientes
campos: Nombre, Edad, Pomedio. Pedir los datos al usuario para 3 alumnos, 
comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir 
los datos del alumno
*/

#include <iostream>
#include <string.h>
using std::cin; using std::cout; using std::endl;

struct alumno{
    char nombre[30];
    int edad;
    float promedio;
}persona[3];


int main(){
    int mayor{0},j=0;
    for(int i=0;i<3;i++){
        fflush(stdin);
        cout<<i+1<<". Nombre: ";     cin.getline(persona[i].nombre,30,'\n');
        cout<<i+1<<". Edad: ";       cin>>persona[i].edad;
        cout<<i+1<<". Promedio: ";   cin>>persona[i].promedio; 
        if (persona[i].promedio >mayor){
            mayor=persona[i].promedio;
            j=i;
        }
    }
    cout<<persona[j].nombre<<" tiene el promedio mas alto con "<<persona[j].promedio;

    return 0;
}

