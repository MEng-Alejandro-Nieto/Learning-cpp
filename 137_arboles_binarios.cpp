#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
    Nodo* izquierda;
    int numero;
    Nodo* derecha;
};
int Numero_niveles{0};


Nodo* crear_nodo(int n);
void menu(int &);
void insertar(Nodo*&, int);
void mostrar(Nodo* arbol, int contador);
void preorden(Nodo* arbol);
bool busqueda(Nodo* arbol, int n);
void preorden(Nodo* arbol);
void inorden(Nodo* arbol);
void postorden(Nodo* arobl);

int main(){
    Nodo* arbol=NULL;
    int elemento{0};
    int opcion{0};
    int contador{0};
    int objetivo{0};
    while(opcion!=6){
        menu(opcion);
        switch (opcion){
            case 1: cout<<"Entero: "; cin>>elemento; insertar(arbol,elemento); break;
            case 2: mostrar(arbol,contador); cout<<endl; break;
            case 3: cout<<"Elemento a buscar: "; cin>> objetivo; 
                    if(busqueda(arbol,objetivo) == true){
                        cout<<"El elemento se encuentra en el arbol"<<endl;
                    }
                    else{
                        cout<<"Este elemento no se encuentra en el arbol"<<endl;
                    }
                    break;
            case 4: preorden(arbol); break;
            case 5: inorden(arbol); break;
            case 6: postorden(arbol); break;
            case 7: cout<<"Adios"<<endl; break;
        }
    }
    getch();
    return 0;
}

void menu(int &opcion){
    cout<<"\n1. Agregar"<<endl;
    cout<<"2. Mostrar datos"<<endl;
    cout<<"3. Buscar elemento"<<endl;
    cout<<"4. Mostrar en preorden"<<endl;
    cout<<"5. Mostrar inorden"<<endl;
    cout<<"6. Mostrar postorden"<<endl;
    cout<<"7. Salir"<<endl;
    cout<<"Opcion: "; cin>>opcion;
}
Nodo* crear_nodo(int n){            //Retorna una variable de tipo puntero que apunta a una estructura de tipo Nodo
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->numero = n;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;
    return nuevo_nodo;
}
void insertar(Nodo* &arbol, int n){
    if(arbol==NULL){
        Nodo* nuevo_nodo = crear_nodo(n);
        arbol = nuevo_nodo;
    }
    else{
        if(n < arbol->numero){
            insertar(arbol->izquierda,n);
        }
        else{
            insertar(arbol->derecha,n);
        }
    }
}
void mostrar(Nodo* arbol, int contador){
    if(arbol == NULL){
        return;
    }
    else{
        mostrar(arbol->derecha, contador+1);
        for(int i{0};i<contador;i++){
            cout<<"   ";
        }
        cout<<arbol->numero<<endl;
        mostrar(arbol->izquierda,contador+1);
    }
}
bool busqueda(Nodo* arbol, int objetivo){
    if(arbol == NULL){
        return false;
    }
    else if(objetivo > arbol->numero){
        busqueda(arbol->derecha,objetivo);
    }
    else if(objetivo < arbol->numero){
        busqueda (arbol->izquierda, objetivo);
    }
    else{
        return true;
    }
}
void preorden(Nodo* arbol){
    if (arbol == NULL){
        return ;
    }
    else{
        cout<<arbol->numero<<" - ";
        preorden(arbol->izquierda);
        preorden(arbol->derecha);
    }
}
void inorden(Nodo* arbol){
    if(arbol == NULL){
        return ;
    }
    else {
        inorden(arbol->izquierda);
        cout<<arbol->numero<<"  ";
        inorden(arbol->derecha);
    }
    
}
void postorden(Nodo* arbol){
    if(arbol == NULL){
        return ;
    }
    else{
        postorden(arbol->izquierda);
        postorden(arbol->derecha);
        cout<<arbol->numero<<"  ";
    }
}