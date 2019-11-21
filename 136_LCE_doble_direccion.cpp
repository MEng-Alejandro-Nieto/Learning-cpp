//LISTA ENLAZADA CIRCULAR DE DIRECCION DOBLE

#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
    Nodo* anterior;
    int elemento;
    int posicion;
    Nodo* siguiente;
};
int i{1};
int posicion{1};
void menu(int &opcion);
void agregar(Nodo* &primero,Nodo* &ultimo);
void ascendente(Nodo* primero, Nodo* ultimo);
void descendente(Nodo* primero, Nodo* ultimo);
void retirar(Nodo* primero, Nodo* ultimo);

int main(){
    Nodo* primero = NULL;
    Nodo* ultimo = NULL;
    int opcion{0};
    while(opcion!=5){
        menu(opcion);
        switch(opcion)
        {
        case 1: agregar(primero, ultimo); break;
        case 2: ascendente(primero, ultimo); break;
        case 3: descendente(primero, ultimo); break;
        case 4: retirar(primero,ultimo); break;
        case 5: cout<<"Adios :D"<<endl; break;
        default: cout<<"opcion invalida"<<endl; break;
        }
    }


    getch();
    return 0;
}

void menu(int &opcion){
    cout<<"\n\t.:MENU:."<<endl;
    cout<<"1. Agregar numero"<<endl;
    cout<<"2. Mostrar numeros de principio a fin"<<endl;
    cout<<"3. Mostrar numeros de fin a principio"<<endl;
    cout<<"4. Retirar"<<endl;
    cout<<"5. Salir"<<endl; 
    cout<<"Opcion: "; cin>>opcion;
}

void agregar(Nodo* &primero,Nodo* &ultimo){
    float n;
    cout<<"Numero que desea Agregar: "; cin>>n;
    Nodo* nuevo_nodo = new Nodo();
    if(i==1){
        primero = nuevo_nodo;
        nuevo_nodo->elemento = n;
        nuevo_nodo->posicion = posicion++;
        nuevo_nodo->anterior = NULL;
        nuevo_nodo->siguiente = NULL;        
    }
    else{
        ultimo->siguiente = nuevo_nodo;
        nuevo_nodo->anterior = ultimo;
        nuevo_nodo->elemento = n;
        nuevo_nodo->posicion = posicion++;
        nuevo_nodo->siguiente = primero;
        primero->anterior = nuevo_nodo;
    }
    ultimo = nuevo_nodo;
    i++;
}

void ascendente(Nodo* primero, Nodo* ultimo){
    int k=1;
    do{
        cout<<primero->posicion<<": "<<primero->elemento<<"  ";
        primero = primero->siguiente;
        k++;
    }while(k<=posicion);
}
void descendente(Nodo* primero, Nodo* ultimo){
    int k=1;
    do{
        cout<<ultimo->posicion<<": "<<ultimo->elemento<<"  ";
        ultimo = ultimo->anterior;
        k++;
    }while(k<=posicion);
}
void retirar(Nodo* primero, Nodo* ultimo){
    int index;
    cout<<"Que posicion desea eliminar de la lista ("<<posicion-1<<"): "; cin>>index; 
    if(index<=posicion && index>=1){
        Nodo* temp = new Nodo();
        temp=primero;
        for(int k{1};k<index;k++){
            temp = temp->siguiente;
        }
        temp->anterior->siguiente = temp->siguiente;
        temp->siguiente->anterior = temp->anterior;
        posicion--;
        for(int k{1};k<posicion;k++){
            primero->posicion = k;
            primero = primero->siguiente;
        }
        delete temp;

    }
    else{
        cout<<"Fuera de rango"<<endl;
    }
}