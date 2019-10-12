/*
Hacer un arreglo de estructura llamada atleta para N atletas que 
contengan los siguientes campos: nombre, pais, numero de medallas,
y devuelva los datos (nombre, pais) del atleta que ha ganado el 
mayor numero de medallas
*/

#include <iostream>
#include <string.h>
using std::cin; using std::cout; using std::endl;
struct datos{
    char nombre[30];
    char pais[15];
    int numero_medallas;
}atleta[100];

int main(){
    int N{0},mayor{0}, j;
    cout <<"cuantos atletas  hay: "; cin>>N;
    for(int i{0};i<N;i++){
        fflush(stdin);
        cout<<i+1<<". Nombre: "; cin.getline(atleta[i].nombre,30,'\n');
        cout<<i+1<<". Pais: ";cin>>atleta[i].pais;
        cout<<i+1<<". Numero de medallas: "; cin>>atleta[i].numero_medallas;
        cout<<endl;
        if(atleta[i].numero_medallas>mayor){
            mayor=atleta[i].numero_medallas;
            j=i;
            }
        }
    
    fflush(stdin);
    cout<<"nombre: "<<atleta[j].nombre<<endl;
    fflush(stdin);
    cout<<"Pais: "<<atleta[j].pais;
    return 0;
}