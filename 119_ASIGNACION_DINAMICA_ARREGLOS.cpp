/*
new:Reserva el numero de bytes solicitado por la declaracion.
delete: Libera un bloque de bytes reservado con aterioridad.

Ejemplo: pedir al usuario n calificaciones y almacenarlos en un 
arreglo dinamico
*/

#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////////////
void notas();
void mostrar(int []);
////////////////////////////////////////////////////////////////////
int n,*calificacion;
////////////////////////////////////////////////////////////////////
int main(){
    notas();
    mostrar(calificacion);
    delete[] calificacion;
    return 0;
}
////////////////////////////////////////////////////////////////////
void notas(){
    cout<<"Numero de calificaciones: "; cin>>n;
    calificacion= new int[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese una nota: "; cin>>calificacion[i];
    }
}
void mostrar(int calificacion[]){
    for(int i=0;i<n;i++){
        cout<<"Nota: "<<*calificacion<<endl;
        *calificacion++;
    }

}