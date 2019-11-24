/*
Hacer un programa para agregar numeros enteros a una pila, hasta que el
que el usuario decida, despues mostrar  todos los numeros introducidos
en la pila
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
//////////////////////////////////////////////////////////////////////
struct nodo{
    int n;
    nodo *siguiente;
};
//////////////////////////////////////////////////////////////////////
void pregunta();
void agregar(nodo *&,int);
//////////////////////////////////////////////////////////////////////
int main(){
    nodo *apuntador=NULL;
    int bandera=1;
    int numero=0;

    do{
        do{
            cout<<"agregar numero (Yes=1/No=0) : "; cin>>bandera;
        }while(bandera!=1 && bandera!=0);

        if (bandera==1){
            cout<<"numero: ";   cin>>numero;
            agregar(apuntador,numero);
        }
        else{
            cout<<"Adios! :)";
        }
    }while(bandera!=0);
    return 0;
}
//////////////////////////////////////////////////////////////////////
void agregar(nodo *&apuntador,int numero){
    nodo *nuevo_apuntador= new nodo();
    nuevo_apuntador->n=numero;
    nuevo_apuntador->siguiente=apuntador;
    apuntador=nuevo_apuntador;
}
//////////////////////////////////////////////////////////////////////