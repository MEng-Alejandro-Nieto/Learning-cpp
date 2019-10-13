/*
Escriba una funcion llamada calc_anos() que tenga un parametro entero 
que represente el numero de dias desde la fecha 1/1/2000 y parametros 
de referencia nombrados ano, mes y dia. La funcion es calcular el ano,
mes y dia actual para el numero dado de dias que se le transmitan. Usando
las referencias. la funcion debera alterar en forma directa los argumentos 
respectivos en la funcion que llama. para este problema suponga que cada 
ano tiene 365 dias y cada mes tiene 30 dias.
*/


//-------------------------------------------------------------------------
#include <iostream>
using std::cin; using std::cout; using std::endl;
//-------------------------------------------------------------------------
int anios(int,int&,int&,int&);
//-------------------------------------------------------------------------
int main(){
    int Ndias,anos,meses,dias;
    cout<<"Numero de dias: "; cin>>Ndias;
    anios(Ndias,anos,meses,dias);

    cout<<"Anios: "<<anos<<endl;
    cout<<"meses: "<<meses<<endl;    
    cout<<"dias: "<<dias<<endl;
    cout<<dias+1<<"/"<<meses+1<<"/"<<2000+anos<<endl;

    return 0;
}
//-------------------------------------------------------------------------
int anios(int Ndias,int& anos,int& meses, int& dias){
    anos=Ndias/365; Ndias=Ndias%365;
    meses=Ndias/30; 
    dias=Ndias%30;
}




