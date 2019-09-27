/*
Escriba un programa que reciba 6 valores, debe mostrar en pantalla
los valores maximos y minimos y el promedio.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
int numero, max, min, media{0}, i{1};

cout<<i<<" numero: "; cin>>numero;
max=numero; min=numero; media=numero; i++;
do{
    //-------------------------
    cout<<i<<" numero: "; cin>>numero;
    //-------------------------
    if(max<numero){
        max=numero;
    }
    //-------------------------
    if (min>numero){
        min=numero;
    }
    //-------------------------
    media=numero+media;
    i++;
    //-------------------------
} while(i<=6);
cout<<"el maximo es: "<<max<<endl;
cout<<"el minimo es: "<<min<<endl;
cout<<"La media es: " <<media/6<<endl;
}