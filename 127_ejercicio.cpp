/*
Realice un programa que lea una matriz dinamica de NxM y cree su matriz
transpuesta.
*/
#include <iostream>
#include <stdlib.h>
using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////////////////
int **array,**array2,nfilas, ncol;
///////////////////////////////////////////////////////////////////////
void pregunta();
void transpuesta(int **);
///////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    transpuesta(array);
}
///////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Numero de filas: "; cin>>nfilas;
    cout<<"Numero de columnas: "; cin>>ncol;
    array= new int*[nfilas];
    for(int i=0;i<nfilas;i++){
        array[i]= new int[i];
        for(int j=0;j<ncol;j++){
            cout<<"Elemento["<<i<<" "<<j<<"]: ";cin>>*(*(array+i)+j);
        }
    }
}
//---------------------------------------------------------------
void transpuesta(int **){
    array2= new int*[ncol];
    for(int i=0;i<ncol;i++){  
        array2[i]= new int[i];
        for(int j=0;j<nfilas;j++){
            *(*(array2+i)+j)=*(*(array+j)+i);
            cout<<*(*(array2+i)+j)<<" ";
        }
        cout<<endl;
    }
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////