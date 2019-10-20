/*
Pedir al usuario N numeros, almacenarlos en un arreglo dinamico, 
posteriormente ordenar los numeros en orden ascendente y mostrarlos 
en pantalla
*/
#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////////
int *array,aux,n;
//////////////////////////////////////////////////////////////////
void pregunta();
void ordenar(int *);
void mostrar(int *);
//////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    ordenar(array);
    mostrar(array);
    return 0;
}
//////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Elementos del vector: "; cin>>n;
    array=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Elemento["<<i<<"]: "; cin>>*(array+i);
    }
}

void ordenar(int *array){
    float aux;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(*(array+j)>*(array+j+1)){
                aux=*(array+j);
                *(array+j)=*(array+j+1);
                *(array+j+1)=aux;
            }
        }
    }
}

void mostrar(int *array){
    for(int i=0;i<n;i++){
        cout<<*(array+i)<<" ";
    }
}
//////////////////////////////////////////////////////////////////
