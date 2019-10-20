/*
Realice una funcion que tome como parametros un vector de numeros y su
tamano y cambie el signo de los elementos del vector
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;
float vector[100];int tamano;
/////////////////////////////////////////////////////////////////////////
void pregunta();
void CambioSigno(float[],int);

/////////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    CambioSigno(vector,tamano);
    return 0;
}

/////////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Ingrese el tamano del vector: "; cin>>tamano;
    for(int i{0};i<tamano;i++){
        cout<<"vector["<<i<<"]: "; cin>>vector[i];
    }
}
void CambioSigno(float vector[],int tamano){
    for(int i{0};i<tamano;i++){
        vector[i]*=-1;
        cout<<vector[i]<<" ";
    }

}

/////////////////////////////////////////////////////////////////////////