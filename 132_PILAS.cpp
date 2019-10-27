#include <iostream>
#include <stdlib.h>
using namespace std;
///////////////////////////////////////////////////////////////////
struct nodo{
    int numero;
    nodo *siguiente;
};
///////////////////////////////////////////////////////////////////
void agregar(nodo *&,float &);
void quitar(nodo *&,float &);
///////////////////////////////////////////////////////////////////
int main(){
    nodo *apuntador=NULL;
    int tamano=0; float dato=0;
    cout<<"Cuantos valores va a insertar en la pila: "; cin>>tamano;
    for (int i=0;i<tamano;i++){
        cout<<i+1<<" valor: "; cin>>dato;
        agregar(apuntador,dato);
    }
    while(apuntador!=NULL){
        quitar(apuntador,dato);
    }

    quitar(apuntador,dato);

    
    return 0;
}
///////////////////////////////////////////////////////////////////
void agregar(nodo *&apuntador,float &dato){
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->numero=dato;
    nuevo_nodo->siguiente=apuntador;
    apuntador=nuevo_nodo;
}

void quitar(nodo *&apuntador,float &dato){
    dato=apuntador->numero;
    nodo *apuntador_auxiliar=apuntador;
    apuntador=apuntador_auxiliar->siguiente;
    delete apuntador_auxiliar;
    cout<<"Se obtuvo: "<<dato<<endl;
}


