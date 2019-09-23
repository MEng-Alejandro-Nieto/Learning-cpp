#include <iostream>
using namespace std;

int main(){
    float a,b,resultado=0;

    cout<<"Digite el valor de a: ";     cin>>a;
    cout<<"Digite el valor de b: ";     cin>>b;
    resultado=(a/b)+1;

    //Si deseas que los valores sean redondeados  a ciertas cifras decimales
    cout.precision(3);
    cout<<"\nEl resultado es: "<<resultado<<endl;  

    return 0;
}