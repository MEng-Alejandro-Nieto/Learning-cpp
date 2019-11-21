#include <iostream>
using namespace std;


struct Nodo{
    int numero;
    Nodo* siguiente;
};
int i{0};
// Function Prototype
void menu(int &);
void agregar(Nodo* &frente, Nodo* &fin);
void retirar(Nodo* &frente, Nodo* &fin);
void mostrar(Nodo* frente);

//Main function
int main(){
    int opcion{0},n;
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    while(opcion!=4){
        menu(opcion);
        switch(opcion){
            case 1 : agregar(frente,fin); break;
            case 2 : mostrar(frente);       break;
            case 3 : retirar(frente,fin);   break;
            case 4 : break;
            default: cout<<"opcion invalida"<<endl;   
        }
    }
    return 0;
}

void menu(int &opcion){
    cout<<"\t.:MENU:."<<endl;
    cout<<"1. Agregar elemento"<<endl;
    cout<<"2. Mostrar elementos"<<endl;
    cout<<"3. Quitar elemento"<<endl;
    cout<<"4. Salir"<<endl; 
    cout<<"Opcion: "; cin>>opcion;
}

void agregar(Nodo* &frente,Nodo* &fin){
    int elemento{0};
    cout<<"Elemento: "; cin>>elemento;
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->numero = elemento;
    nuevo_nodo->siguiente = NULL;
    if(i==0){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    i++;
}

void retirar(Nodo* &frente, Nodo* &fin){
	int value=frente->numero;
	cout<<value<<endl;
	Nodo* temp = frente;

	if(i==0){
		fin = NULL;
		frente = NULL;
	}
	else{
		frente = temp->siguiente;
	}
	delete temp;
    i--;		
}

void mostrar(Nodo* frente){
    int valor;
    for(int j{0};j<i;j++){
        cout<<frente->numero<<endl;
        frente = frente->siguiente;
    }

}