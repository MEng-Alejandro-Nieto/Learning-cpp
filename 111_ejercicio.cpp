/*
Escriba una funcion recursiva que calcule un numero elevado
a una potencia entera mayor o igual a 0
*/
///////////////////////////////////////////////////////////////
#include <iostream>
using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////////
int base, exponente;
///////////////////////////////////////////////////////////////
void pregunta();
int calculo(int,int);
///////////////////////////////////////////////////////////////
int main(){
    do{
        pregunta();
    }while(exponente<0 || base<0);
    cout<<calculo(base,exponente);

    return 0;
}
///////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Escriba la base: "; cin>>base;
    cout<<"Escriba el exponente: "; cin>>exponente;    
}
int calculo(int base,int exponente){
    if(exponente==0){
        return 1;
    }
    else{
        return base*calculo(base,exponente-1);
    }
}

