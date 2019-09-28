/*
Realice un programa que calcule la descomposicion en factores de un 
numero entero
*/

#include <iostream>
#include <math.h>

using std:: cout; using std:: cin; using std:: endl;

int main(){
    int num,residuo{0};
    cout<<"Ingrese un numero para calcular su factorial: "; cin>>num;
    cout<<"El factorial de "<<num<<" es: "<<endl;
    while (num!=1){
        int factor{1};
        do{
            factor++;
            residuo=num%factor;
        }while(residuo!=0);
        num=num/factor;
        cout<<factor<<endl;
    }

}









