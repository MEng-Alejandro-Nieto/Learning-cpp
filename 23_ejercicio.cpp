/*
Escriba un programa que acepte la entrada de un numero y calcule el 
cuadrado de los siquietens 15 numeros.
*/

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
int num;
cout<<"Digite un numero para calcular el cuadrado de los siguientes 15 numeros: "; cin>>num;
for (int i {num}; i <= num+15 ; i++){
cout<<pow(i,2)<<endl;
}
system("pause");
return 0;
}