/*
* El numero de filas y columnas debe ser constante
* El numero de columnas debe se especificado el de filas no

Elevar al cuadrado todos los elementos de una matriz
*/

#include <iostream>
#include <math.h>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////
void matriz_cuadrada(int [][3],int,int);
void mostrar_matriz(int  [][3],int,int);


//////////////////////////////////////////////////////////////
int main(){
    const int nfil=2;
    const int ncol=3;
    int matriz[nfil][ncol]={{2,3,4},{5,6,7}};

    matriz_cuadrada(matriz,ncol,nfil);
    mostrar_matriz(matriz,ncol,nfil);

    return 0;
}
//////////////////////////////////////////////////////////////
void matriz_cuadrada(int matriz[][3],int columnas,int filas){
    for (int j{0};j<filas;j++){
        for(int i{0};i<columnas;i++){
            matriz[j][i]*=matriz[j][i];
        }
        cout<<endl;
    }

}

void mostrar_matriz(int matriz[][3],int columnas,int filas){
    for (int j{0};j<filas;j++){
        for(int i{0};i<columnas;i++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }

}


//////////////////////////////////////////////////////////////

