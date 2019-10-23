/*
Realice un programa que calcule la suma de dos matrices dinamicas
*/

#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////////////////
int **matriz1,**matriz2,nfilas,ncol;
///////////////////////////////////////////////////////////////////////
void pregunta();
void suma(int **,int **);
///////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    suma(matriz1,matriz2);
    return 0;
}
///////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Numero de filas: "; cin>>nfilas;
    cout<<"Numero de columnas: "; cin>>ncol;    
    cout<<"Matriz 1:"<<endl;
    matriz1= new int*[nfilas];
    for(int i=0;i<nfilas;i++){
        matriz1[i]= new int [ncol];
        for(int j=0;j<ncol;j++){
            cout<<"Elemento ["<<i<<" "<<j<<"]: "; cin>>*(*(matriz1+i)+j);
        }
    }
    cout<<"Matriz 2:"<<endl;
    matriz2= new int*[nfilas];
    for(int i=0;i<nfilas;i++){
        matriz2[i]= new int [ncol];
        for(int j=0;j<ncol;j++){
            cout<<"Elemento ["<<i<<" "<<j<<"]: "; cin>>*(*(matriz2+i)+j);
        }
    }
}

void suma(int **matriz1, int ** matriz2){
for(int i=0;i<nfilas;i++){
    cout<<endl;
    for(int j=0;j<ncol;j++){
        *(*(matriz1+i)+j)+=*(*(matriz2+i)+j);
        cout<<*(*(matriz1+i)+j)<<" ";
    }
}

}
///////////////////////////////////////////////////////////////////////




