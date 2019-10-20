/*
Realice una funcion que tome como parametros un vector de enteros y su 
tamano e imprima un vector con elementos impares del vector.
*/

#include<iostream>
using std::cin; using std::cout; using std::endl;
int vector[100]; int tamano;
/////////////////////////////////////////////////////////////////////////
void pregunta();
void impares(int[],int);


/////////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    impares(vector,tamano);
    return 0;
}


/////////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Ingrese el tamano del vector: "; cin>>tamano;
    for (int i{0};i<tamano;i++){
        cout<<"vector["<<i<<"]: "; cin>>vector[i];
    }
}
//-----------------------------------------------------------------------
void impares(int vector[],int tamano){
    int vector2[100]; int j{0};
    for (int i{0};i<tamano;i++){
        if(vector[i]%2!=0){
            vector2[j]=vector[i];
            cout<<vector2[j]<<" ";
            j++;
        }
    }
}

/////////////////////////////////////////////////////////////////////////