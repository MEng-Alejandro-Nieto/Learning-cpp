/*
Escriba un fragmento de programa que intercambie los valores de dos
variables
*/

#include <iostream>
using namespace std;

int main(){
    float a=0,b=0,c=0;

    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    c=a; a=b; b=c;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;


    return 0;


}