/*
Como rellenar una matriz n x n y mostrar su contenido
*/
#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////////////
int **matriz, nfilas=0,ncol=0;
//////////////////////////////////////////////////////////////////////
void pregunta();
void mostrar(int **,int,int);
//////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    mostrar(matriz,nfilas,ncol);
    return 0;
}
//////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Numero de filas: ";  cin>>nfilas;
    cout<<"Numero de columnas: ";   cin>>ncol;
    matriz=new int*[nfilas]; //reservando memoria para las filas
    for(int i=0;i<nfilas;i++){
        matriz[i]= new int[ncol];
        for(int j=0;j<ncol;j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz+i)+j);
        }
    }
}
//////////////////////////////////////////////////////////////////////
void mostrar(int **matriz,int nfilas,int ncol){
    cout<<endl;
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: "<<*(*(matriz+i)+j)<<endl;
        }
        cout<<endl;
    }
    
}




