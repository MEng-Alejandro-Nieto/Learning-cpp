//Escriba un programa que lea dos numeros y determine cual de ellos es el mayor


#include <iostream>
using  namespace std;

int main(){
    int numero1,numero2;
    
    cout<<"Digite dos numeros para identificar cual es el mayor: "<<endl;
    cout<<"Numero 1: "; cin>>numero1;
    cout<<"Numero 2: "; cin>>numero2;
    
    if (numero1>numero2){
        cout<<"en numero "<<numero1<< " es mayor que el numero "<<numero2;
        }
    else if(numero2>numero1){
        cout<<"en numero "<<numero2<< " es mayor que el numero "<<numero1;
        }
    else{
        cout<<"Ambos numeros son iguales";
        }

    return 0;
    
    }