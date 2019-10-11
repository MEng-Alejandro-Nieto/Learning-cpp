/*
Busqueda secuencial
a[5]={3,4,2,1,5}; dato=4
*/

#include <iostream>
#include <conio.h>
using std::cin; using std::cout; using std::endl;

int main(){
    int array[]={3,4,2,1,5}, dato,i{0}, length, bandera='F';
    length=sizeof(array)/sizeof(array[0]);
    cout<<"ingrese el dato que desea verificar: "; cin>>dato;
    while((bandera=='F') && (i<length)){
        if(array[i]==dato){
            bandera='V';
        }
        else{i++;}
    }
    if(bandera=='V'){
        cout<<"El numero se encuentra en la posicion: "<<i;
    }
    else{
        cout<<"El numero no se encontro";
    }


    getch();
    return 0;
}