/*
Hacer una funcion para almacenar N numeros en un arreglo dinamico, 
posteriormente en otra funcion buscar un numero en particular.
*/
#include <iostream>
#include <stdlib.h>

using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////////////
int *array, N, objetivo;
///////////////////////////////////////////////////////////////////
void pregunta();
void buscar(int *,int);
///////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    buscar(array,N);
    delete[] array;
    return 0;
}
///////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Elementos del array: "; cin>>N;
    array= new int[N];
    for(int i=0;i<N;i++){
        cout<<"posicion ["<<i<<"]: "; cin>>*(array+i);
    }
    cout<<"\nQue elemento desea buscar: "; cin>>objetivo;
}

void buscar(int *array,int N){
    int i=0; 
    bool bandera = false;
    while(bandera==false && i<N){
        if(*(array+i)==objetivo){
            bandera=true;
        }
        i++;
    }
    if(bandera==true){
        cout<<"El numero "<<objetivo<<" se encuentra en la posicion "<<i-1<<endl;
    }
    else{
        cout<<"El numero no se encuentra en al array";
    }
}
///////////////////////////////////////////////////////////////////