/*
Defina una estructura que indique el tiempo empleado por un ciclista
en una etapa. la estructura debe tenere tre campos: horas, minutos, 
segundos. Escriba un programa que dado n etapas, calcule el tiempo 
total empleado en correr todas las etapas
*/

#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

struct ciclista{
    int Horas;
    int Minutos;
    int Segundos;

}etapa[100];

int main(){
    int N,h{0},m{0},s{0};
    cout<<"Ingrese el numero de etapas: "; cin>>N;
    for (int i=0;i<N;i++){
        cout<<i+1<<". Horas: "; cin>>etapa[i].Horas;
        cout<<i+1<<". Minutos: "; cin>>etapa[i].Minutos;
        cout<<i+1<<". Segundos: "; cin>>etapa[i].Segundos;
        h=h+etapa[i].Horas; m=m+etapa[i].Minutos; s=s+etapa[i].Segundos;
        cout<<endl;
    }
    h=h+s/3600+m/60; m=m%60; s=s%3600;
    m=m+s/60; s=s%60;

    cout<<"Tiempo empleado total es: "<<h<<":"<<m<<":"<<s;


    return 0;
}