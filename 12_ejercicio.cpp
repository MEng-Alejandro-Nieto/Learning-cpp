// Determinar si un numero ingresado es positivo o negativo


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    int num=0;
    cout<<"Digite un numero: "; cin>>num;
    
    if(num>0){
        cout<<"El numero es positivo";
        }
    else if (num<0){
        cout<<"El numero es negativo";        
        }    
    else{
        cout<<"El numero es igual a 0";
        }
    
    return 0;
}