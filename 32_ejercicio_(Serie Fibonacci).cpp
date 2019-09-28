/*
Hacer un programa que realice la serie fibonacci
*/

#include <iostream>
#include <math.h>

using std:: cout; using std:: cin; using std:: endl;


int main(){
    int a{0},b{1},resultado=0,n;
    cout<<"Digite el numero de valores de la serie fibonacci que desa calcular: "; cin>>n;
    cout<<b<<endl;
    for (int i{1};i<n;i++){
        resultado=a+b; a=b; b=resultado;
            cout<<resultado<<endl;

    }


    }










