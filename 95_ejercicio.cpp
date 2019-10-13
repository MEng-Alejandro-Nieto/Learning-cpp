/*
Escriba una funcion de tiempo() que tenga un parametro en numero entero
llamado total seg y tres parametros de referencia enteros llamados horas,
minutos y segundos. la funcion es convertir el numero de segundos en su 
equivalente de minutos y horas.
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
//------------------------------------------------------------------------
int tiempo(int,int&,int&,int&);


//------------------------------------------------------------------------
int main(){
    int seg,horas,minutos,segundos;
    cout<<"Segundos: "; cin>>seg;
    
    tiempo(seg,horas,minutos,segundos);
    
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;
    return 0;
}
//------------------------------------------------------------------------
int tiempo(int seg,int& horas,int& minutos,int& segundos){
    horas=seg/3600;     seg=seg%3600;
    minutos=seg/60;     
    segundos=seg%60;

}
//------------------------------------------------------------------------


















