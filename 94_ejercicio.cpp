/*
Escriba una funcion llamada cambio() que tenga un parametro en numero
entero, y seis parametros de referencias en numero entero llamados cien,
cincuenta, veinte, diez, cinco y uno, respectivamente. la funcion tiene
que considerar el valor entero transmitido como una cantidad en dolares
y convertir el valor en el numero de billetes equivalentes
*/


//-----------------------------------------------------------------
#include <iostream>
using std::cin; using std::cout; using std::endl;
//-----------------------------------------------------------------
void cambio(int, int&, int&, int&, int&, int&, int&);
//-----------------------------------------------------------------
int main(){
    int valor, cien, cincuenta, veinte, diez, cinco, uno;
    cout<<"Ingrese el cambio: "; cin>>valor;
    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
    cout<<"Billetes de 100: " <<cien<<endl;
    cout<<"Billetes de 50 : " <<cincuenta<<endl;
    cout<<"Billetes de 20 : " <<veinte<<endl;
    cout<<"Billetes de 10 : " <<diez<<endl;
    cout<<"Billetes de 5  : " <<cinco<<endl;
    cout<<"Billetes de 1  : " <<uno<<endl;
    
    return 0;
}

//-----------------------------------------------------------------
void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    int aux;
    cien=valor/100;     aux=valor%100;
    cincuenta=aux/50;   aux=aux%50;
    veinte=aux/20;      aux=aux%20;
    diez=aux/10;        aux=aux%10;
    cinco=aux/5;        aux=aux%5;
    uno=aux/1;          aux=aux%1;

}

