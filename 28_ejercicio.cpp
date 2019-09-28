/*
Escriba un programa que pueda calcular el factorial de un numero introducido
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int result{1},n;
    cout<<"Digite el valor al que desea caluclar el factorial: "; cin>>n;
    for (int i{1};i<=n;i++){
        result=result*i;
        }
    cout<<"el factorial del numero "<<n<<"es "<<result;
    return 0;
}




