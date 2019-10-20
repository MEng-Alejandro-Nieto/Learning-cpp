/*
Realice una funcion que dada una matriz y un numero de fila
de la matriz devuelva el menor de los elementos alamcenados 
en dicha fila
*/

////////////////////////////////////////////////////////////
#include <iostream>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////
void pregunta();
void rellenar();
int menor_fila(int matriz[][100],int,int);
////////////////////////////////////////////////////////////
int fila;
int matriz[100][100],filas,columnas;
////////////////////////////////////////////////////////////
int main(){
    pregunta();
    rellenar();
    cout<<menor_fila(matriz,filas,columnas);
    return 0;
}

////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Ingrese el numero de filas: "; cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;
    cout<<"fila: "; cin>>fila;
}
void rellenar(){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"posicion ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
        }
    }
}

int menor_fila(int matriz[][100],int filas,int columnas){
    int menor;
    if(fila<=filas){
        menor=10000;
        for(int i=0;i<filas;i++){
            if(fila==i){
                for(int j=0;j<columnas;j++){
                    if(matriz[i][j]<menor){
                        menor=matriz[i][j];
                    }
                }
            }
        }
        return menor;
    }
    else{
        cout<<"La fila seleccionada es mayor el numero de filas existentes en la matriz";
    }

}
