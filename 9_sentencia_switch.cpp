#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=10,b=20,numero;

    cout<<"Digite un numero: "; cin>>numero;

    if(numero>=a  && numero<=b){
        cout<<"el numero esta entre 10 y 20";
    }
    else{
        cout<<"el numero este fuera de rango";
    }

    

    return 0;
}