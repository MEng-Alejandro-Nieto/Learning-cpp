/*
Defina una estructura que indique el tiempo empleado por un ciclista
en recorrer una etapa. al estructura debe tener tres campos: horas, 
minutos y segundos
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
struct tiempo{
    int horas;
    int minutos;
    int segundos;
}ciclista,*dir_ciclista=&ciclista;
////////////////////////////////////////////////////////////////
void pregunta();
void tiempo_total(tiempo *dir_ciclista);
////////////////////////////////////////////////////////////////
int main(){
    pregunta ();
    tiempo_total(dir_ciclista);
}
////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"horas: "; cin>>dir_ciclista->horas;
    cout<<"minutos: "; cin>>dir_ciclista->minutos;
    cout<<"segundos: "; cin>>dir_ciclista->segundos;
}
////////////////////////////////////////////////////////////////
void tiempo_total(tiempo *dir_ciclista){
    dir_ciclista->horas+=(dir_ciclista->segundos)/3600; dir_ciclista->segundos=(dir_ciclista->segundos)%3600; 
    dir_ciclista->minutos+=(dir_ciclista->segundos)/60; dir_ciclista->segundos=(dir_ciclista->segundos)%60; 
    dir_ciclista->horas+=(dir_ciclista->minutos)/60; dir_ciclista->minutos=(dir_ciclista->minutos)%60; 
    cout<<"Horas: "<<dir_ciclista->horas<<endl;
    cout<<"Minutos: "<<dir_ciclista->minutos<<endl;
    cout<<"Segundos: "<<dir_ciclista->segundos<<endl;    
}
////////////////////////////////////////////////////////////////




