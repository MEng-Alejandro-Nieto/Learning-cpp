
/* 
Escriba un programa que lea de la entrada estandar tres numeros. despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de
los numeros introducido con anterioridad
*/ 


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2, num3,num4;
    
    cout<<"Digite 3 numeros: "; cin>>num1>>num2>>num3;
    cout<<"Ahora digite un cuarto numero: "; cin>>num4;
    
    if (num4==num1 || num4==num2 || num4==num3)
    {
        cout<<"El cuarto numero coincide";
    }
    
    else
    {
        cout<<"El cuarto numero no coincide"; 
    }
    

    return 0;
}
