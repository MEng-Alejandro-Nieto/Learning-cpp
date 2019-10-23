/*
Hacer una estructura llamada alumno, en la cual se tendra los 
siguientes campos: nombre, edad, promedio, pedir datos al usuario
para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
using namespace std;
///////////////////////////////////////////////////////////////////////
int n=5;
struct alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumnos[3],*dir_alumnos=alumnos;
///////////////////////////////////////////////////////////////////////
void pregunta();
void promedio_mayor(alumno *dir_alumnos);
///////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    promedio_mayor(dir_alumnos);
    return 0;
}
///////////////////////////////////////////////////////////////////////
void pregunta(){
    for(int i=0;i<3;i++){
        fflush(stdin);
        cout<<i+1<<" Nombre: "; cin.getline((dir_alumnos+i)->nombre,30,'\n');
        cout<<i+1<<" Edad: "; cin>>(dir_alumnos+i)->edad;
        cout<<i+1<<" promedio: "; cin>>(dir_alumnos+i)->promedio;
    }
}

void promedio_mayor(alumno *dir_alumnos){
    float mayor=dir_alumnos->promedio;
    int aux=0;
    for(int i=0;i<3;i++){
        if((dir_alumnos+i)->promedio>mayor){
            mayor=(dir_alumnos+i)->promedio;
            aux=i;
        }
    }
    cout<<"Nombre del mejor alumno : "<<(dir_alumnos+aux)->nombre;
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////