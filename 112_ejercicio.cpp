/*
Escirba una fucion qe devuelva en la salida estandar los numeros
del inicio al fin. escriba una version que escriba los numeros 
en orden ascendente
*/

//////////////////////////////////////////////////////////////
#include <iostream>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////
int inicio,fin;
//////////////////////////////////////////////////////////////
void pregunta();
int muestra(int,int);
//////////////////////////////////////////////////////////////
int main(){
    pregunta();
    for(int i=inicio;i<=fin;i++){
        cout<<muestra(inicio,i)<<endl;
    } 
    
    return 0;
}
//////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Inicio: "; cin>>inicio;
    cout<<"Final: "; cin>>fin;
}
int muestra(int inicio,int fin){
    if(fin==inicio){
        return inicio;
    }
    else{
        return 1+muestra(inicio,fin-1);
    }
}
//////////////////////////////////////////////////////////////

