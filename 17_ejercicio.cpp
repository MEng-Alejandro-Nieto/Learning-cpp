/*
hacer un menu que considere las siguientes opciones:
caso 1: Cubo de un numero
caso 2: numero par o inpar
caso 3: Salir
*/

#include <iostream>;
#include <math.h>

using namespace std;


int main()
    {
    
    int opcion,numero;
    cout<<"                    .:MENU:.\nSeleccione una de las siguientes opciones.\n";
    cout<<"1. Cubo de un numero\n2. numero par o impar\n3.salir\n\n";
    cout<<"Opcion: "; cin>>opcion;
    
    switch(opcion)
        {
        case 1:
                cout<<"Digite un numero para calcular su cubo: "; cin>>numero;
                cout<<"el cubo de "<<numero<<" es "<<pow(numero,3); break;
        case 2:
                cout<<"Digite un numero para determinar si es par o impar: "; cin>>numero;
                if(numero%2==0)
                    {
                    cout<<"El numero "<<numero<<" es par"; break;
                    }
                else{
                    cout<<"El numero "<<numero<<" es impar"; break;
                    }
                
        case 3:
                cout<<"Adios";  break;
        }
    }