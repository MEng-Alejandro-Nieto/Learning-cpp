/*
Realice una funcion que tome como parametros de entrada un vector y su 
tamano y diga si el vector esta ordenado, crecientemente, decrecientemente: 
sugerencia compruebe que para todas las posiciones del vector, salvo para 
el 0 el elemento del vector es mayor o igual que el elemento que le 
precede en el vector
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
float tamano, vector[100];
/////////////////////////////////////////////////////////////////////////
float pregunta();
void verificador(float [],int);

/////////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    verificador(vector,tamano);
    return 0;
}

/////////////////////////////////////////////////////////////////////////
float pregunta(){
    cout<<"Tamano del vector: "; cin>>tamano;
    for(int i{0};i<tamano;i++){
        cout<<"Vector["<<i<<"]: "; cin>>vector[i];
    }
}
//----------------------------------------------------------------------
void verificador(float vector[],int tamano){
    int verificador{0};
    for(int i{1};i<tamano;i++){
        if(vector[i]>=vector[i-1]){
            verificador++;
        }
    }
    if(verificador==tamano-1){
        cout<<"El arreglo esta ordenado de forma creciente";
    }

    else{
        verificador=0;
        for(int i{1};i<tamano;i++){
            if(vector[i]<=vector[i-1]){
                verificador++;
            }
        }
        if(verificador==tamano-1){
            cout<<"El arreglo esta ordenado de forma decreciente";
        }
        else{
            cout<<"El arreglo no esta ordenado";
        }
    }
 
}

/////////////////////////////////////////////////////////////////////////

