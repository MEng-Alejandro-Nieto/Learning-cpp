/*
Defina una estructura que sirva para representar a una persona. la 
estructura debe contener dos campos: nombre, y un valor de tipo 
logico que indica si a persona tiene algun tipo de discapacidad.
realice un programa que dado un vector de personas rellene dos 
nuevos vectores: uno que contenga las personas que no tienen 
ninguna discapacidad y otro que contenga personas con discapacidad.
*/
#include<iostream>
#include<string.h>
using std::cin; using std::cout; using std::endl;

struct atletas{
    char nombre[30];
    bool dicapacidad;
}persona[100],capacitados[100],discapacitados[100];

int main(){
    int N,i{0},j{0},k{0};

    cout<<"Ingrese el numero de atletas: "; cin>>N;
    for (i=0;i<N;i++){
        fflush(stdin);
        cout<<"Atleta "<<i+1<<": "; cin.getline(persona[i].nombre,30,'\n');
        cout<<"Discapacitado? ";    cin>>persona[i].dicapacidad;
        if(persona[i].dicapacidad==1){
            strcpy(discapacitados[j].nombre,persona[i].nombre); j++;
            }
        else if(persona[i].dicapacidad==0){
            strcpy(capacitados[k].nombre,persona[i].nombre); k++;
            }
        }
    j--; k--;

    cout<<"Capacitados:\n";
    for(int i=0;i<=k;i++){
        cout<<i+1<<". "<<capacitados[i].nombre<<endl;
        }
    cout<<endl<<endl; cout<<"Discapacitados:\n";

    for(int i=0;i<=j;i++){
        cout<<i+1<<". "<<discapacitados[i].nombre<<endl;
        }
}