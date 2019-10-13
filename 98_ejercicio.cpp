/*
Realice una funcion que tome como parametros un vector de numeros enteros
y devuelva la suma de sus elementos.
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
//---------------------------------------------------------------
int sumatoria(int[],int);

//---------------------------------------------------------------
int main(){
    int tamano;
    cout<<"ingrese el tamano del arreglo: "; cin>>tamano;
    int arreglo[tamano];
    for(int i{0};i<tamano;i++){
        cout<<"inserte numero en la posicion "<<i+1<<": "; cin>>arreglo[i];
    }
    cout<<sumatoria(arreglo,tamano);
    return 0;
}

//---------------------------------------------------------------
int sumatoria(int arreglo[],int tamano){
    int suma{0};
    for(int i{0};i<tamano;i++){
        suma+=arreglo[i];
    }
    return suma;
}

//---------------------------------------------------------------