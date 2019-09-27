/*
Desarrolle un programa donde el usuario ingrese un numero del
1 al 15 y muestre la tabla de multiplicar del 1 hasta el 15.
*/

#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
    int num, result=0;     
    do{
        cout<<"ingrese un numero del 1-15 para determinar su tabla\nde multiplicar: "; cin>>num;
    }while(num<1 || num>15);

    for(int i=1;i<=15;i++){
        result=num*i;
        cout<<result<<endl;
    }
    system("pause");
    return 0;
}