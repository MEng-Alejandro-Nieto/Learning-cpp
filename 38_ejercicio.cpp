/*
Escribe un programa que defina un vector de numeros y calcule la 
multiplicacion de sus elementos
*/
#include <iostream>
#include <math.h>
#include <stdio.h>
using std:: cout; using std:: cin; using std:: endl;

int main(){

    int result{1},a,b,c,d,e;
    cout<<"Digite el primer numero: "; cin>>a;
    cout<<"Digite el segundo numero: "; cin>>b;
    cout<<"Digite el tercero numero: "; cin>>c;
    cout<<"Digite el cuarto numero: "; cin>>d;
    cout<<"Digite el quinto numero: "; cin>>e;    
    int numeros[]={a,b,c,d,e};
    for(int i{0};i<5;i++){
        result=result*numeros[i];
    }
    cout<<result<<endl;
    system("pause");
    return 0;
}
