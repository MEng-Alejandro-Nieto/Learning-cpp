/*
Hacer un programa que guarde datos de clientes de un banco, los alamacene en la
cola, y por ultimo muestre los clientes en el orden correcto
*/
#include <iostream>
using namespace std;


struct Cliente{
    string nombre;
    string ocupacion;
    int edad;
};
struct Nodo{
    Cliente  persona;
    Nodo* siguiente;
};
int i{0};

void menu(int &opcion);
void agregar(Nodo* &frente, Nodo* &fin);
void mostrar(Nodo* frente);
void retirar(Nodo* &frente, Nodo* &fin);


int main(){
    int opcion{0};
    Nodo* frente = NULL;
    Nodo* fin = NULL;

    while(opcion!=4){
        menu(opcion);
        switch(opcion){
            case 1 : agregar(frente,fin); 
            case 2 : mostrar(frente);
            case 3 : retirar(frente,fin);
            case 4 : cout<<"Adios :D"<<endl; 
        }
    }
    return 0;
}
void menu(int &opcion){
    cout<<"\t.:MENU:."<<endl;
    cout<<"1. Agregar cliente"<<endl;
    cout<<"2. Mostrar nombres de clientes"<<endl;
    cout<<"3. Quitar cliente"<<endl;
    cout<<"4. Salir"<<endl; 
    cout<<"Opcion: "; cin>>opcion;
}
void agregar(Nodo* &frente, Nodo* &fin){
    string  nombre, ocupacion;
    int edad{0};
    cout<<"Nombre: "; getline(cin,nombre); cout<<"Ocupacion: "; getline(cin,ocupacion); cout<<"Edad: "; cin>>edad;
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->persona.nombre = nombre;
    nuevo_nodo->persona.ocupacion = ocupacion;
    nuevo_nodo->persona.edad = edad;
    nuevo_nodo->siguiente = NULL;
    i++;
    if(i==1){
        frente = nuevo_nodo; 
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    
}
void mostrar(Nodo* frente){
    for(int j{0};j<i;j++){
        cout<<"Nombre: "<<frente->persona.nombre<<"\tOcupacion: "<<frente->persona.ocupacion<<"\tEdad: "<<frente->persona.edad<<endl;
        frente = frente->siguiente;
    }
}
void retirar(Nodo* &frente, Nodo* &fin ){
    Nodo* temp = frente;
    cout<<"Nombre: "<<frente->persona.nombre<<"\tOcupacion: "<<frente->persona.ocupacion<<"\tEdad: "<<frente->persona.edad<<endl;
    
    switch(i){
        case 0  : cout<<"No hay mas nodos, ADIOS :D"<<endl; break;
        case 1  : frente = NULL; fin = NULL; break;
        default : frente = frente->siguiente;
    }
    delete temp;
    i--;
}


