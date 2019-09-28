/*
Escriba un programa que calcule el valor de la la suma de los factoriales de 1-n de ese numero
(1!+2!+3!+4!+5!+..+n!).
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n,resultin{1},resultout{0};
    cout<<"Dugute el numero: "; cin>>n;
    for (int i {1};i<=n;i++){
        resultin=1;
        for(int j{1};j<=i;j++){
            resultin= resultin*j;
            }
        resultout=resultout+resultin;
    }
cout<<"el resultado es: "<<resultout;
return 0;
}
