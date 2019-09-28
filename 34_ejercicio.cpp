/*
Realice un programa que solicite al usuario que piense un numero entero entre
1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango
(1-100), e indicarle al usuario si el numero que digito es menor o mayor de al
numero aleatorio, asi hasta que lo adivine, y por ultimo mostrarle el numero 
de intentos que le llevo
*/

#include <iostream>
#include <stdio.h>
#include <time.h>
using std:: cout; using std:: cin; using std:: endl;

int main(){
    int numero,aleatorio,contador{0};
    srand(time(NULL)); // Genera un numero aleatorio
    aleatorio =1+rand()%(100);
    do{
        cout<<"Digite un numero: "; cin>>numero;
        if(numero<aleatorio){
            cout<<"Digite un numero mayor"<<endl<<endl;
        }
        else if(numero>aleatorio){
            cout<<"Digite un numero menor"<<endl<<endl;
        }
        contador++;
    } while(aleatorio != numero);
    cout<<"Felicidades !!!. Te tomo "<<contador<<" intentos";
}
