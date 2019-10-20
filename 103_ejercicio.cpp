/*
determinar si una matriz es simetrica o no
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
int nfil;
int ncol;
int matriz[100][100];
//////////////////////////////////////////////////////////////
void pregunta();
void rellenar(int ncol,int nfil);
void transpuesta(int matriz[100][100],int,int);

//////////////////////////////////////////////////////////////
int main(){
    pregunta();
    rellenar(ncol,nfil);
    transpuesta(matriz,nfil,ncol);

    return 0;
}


//////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Numero de filas: ";      cin>>nfil;
    cout<<"Numero de Columnas: ";   cin>>ncol;
}
//------------------------------------------------------------
void rellenar(int ncol,int nfil){
    
    for(int j=0;j<nfil;j++){
        for(int i=0;i<ncol;i++){
            cout<<"elemento "<<j<<" : "<<i<<": ";   cin>>matriz[j][i];
        }
    }
}
//------------------------------------------------------------
void transpuesta(int matriz[100][100],int nfil,int ncol){
    int verificador=0;
    if (ncol==nfil){
        for(int j=0;j<nfil;j++){
            for(int i=0;i<ncol;i++){
                if (matriz[j][i]!=matriz[i][j]){
                    verificador=1; break;
                }
            }
            if(verificador==1){
                break;
            }
        } 
        if(verificador==0){
            cout<<"La matriz es simetrica";
        }
        else{
            cout<<"La matriz no es simetrica";
        }
    }
    else{
        cout<<"La matriz no es cuadrada.";
    }
}


//////////////////////////////////////////////////////////////