/*
Escriba un programa que calcule el valor de 1+2+3+4+...n
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n{0},a{1},b{2},c{0};
    cout<<"Ingrese el valor de n, para calcular la suma de todos sus valores anteriores: ";cin>>n;

    for(int i{2};i<=n;i++){
        c=a+i;
        a=c;

        cout<<c<<endl;
    }

}



