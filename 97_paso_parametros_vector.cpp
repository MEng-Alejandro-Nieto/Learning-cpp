/*
Paso de parametros tipo vector

void Nombre_De_La_Funcion(tipo Nombre_arreglo[],int tamano_arreglo){
    tareas;
}
*/
//Cuadrados de los elementos de un vector

#include <iostream>
using std::cin; using std::cout; using std::endl;
//-----------------------------------------------------------------------
void cuadrados(int[],int);
void mostrar(int[],int);
//-----------------------------------------------------------------------
int main(){
    int tamano;
    cout<<"Cuantos elementos en el arreglo: "; cin>>tamano;
    int arreglo[tamano];
    for(int i{0};i<tamano;i++){
        cout<<"Ingrese el numero en la posicion "<<i+1<<": ";
        cin>>arreglo[i];
    }
    cuadrados(arreglo,tamano);
    mostrar(arreglo,tamano);
    cout<<endl;
    for(int i=0;i<tamano;i++){
        cout<<arreglo[i]<<endl;
    }
    return 0;
}
//-----------------------------------------------------------------------
void cuadrados(int numeros[],int tamano){
    for(int i{0};i<tamano;i++){
        numeros[i]*=numeros[i];
    }
}
void mostrar(int numeros[],int tamano){
    for(int i{0};i<tamano;i++){
    cout<<numeros[i]<<" ";
    }
}


//-----------------------------------------------------------------------





