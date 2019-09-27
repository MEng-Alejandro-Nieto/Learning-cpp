/*
Escriba un programa que lea valores enteros hasta que se introduzca  un
valor en el rango [20-300] o se introdusca el valor 0. El programa debe 
entregar la suma de los valores, mayores a 0 introducidos.
*/

#include <iostream>
#include<math.h>

using namespace std;


int main(){
int suma{0},i{1},num;

do{
    cout<<"Digite un numero: "; cin>>num;
    if (num>0){
        suma=suma+num;
    }
} while((num>30 || num<20 ) && num!=0);

cout<<"the sum of all the numbers entered is : "<<suma;
}











