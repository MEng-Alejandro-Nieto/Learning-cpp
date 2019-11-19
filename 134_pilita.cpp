#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
    float numero;
    nodo* siguiente;
};

int main(){
    nodo* nodo_base = NULL;



    return 0;
}

void agregar(nodo* &nodo_base,int numero){
    nodo* nuevo_nodo = new nodo();
    nuevo_nodo->numero = numero;
    nuevo_nodo->siguiente = nodo_base;
    nodo_base = nuevo_nodo;
}

