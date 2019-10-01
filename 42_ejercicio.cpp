/*
Escriba un programa que defina un vector de numeros y calcule si existen
algun numero en el arreglo cuyo valor equivale a la suma del resto de los
valores del vector
*/

#include <iostream>
using std:: cin; using std:: cout; using std:: endl;


int main(){
    int vector[]={1,2,3,27,6,7,8,54};
    int length=sizeof(vector)/sizeof(vector[0]);

    for (int i{0};i<length;i++ ){
        int suma{0};
        for(int j{0};j<length;j++){
            if(j!=i){
                suma=suma+vector[j];
            }
        }
        if(suma==vector[i]){
            cout<<"En la posicion "<<i<<" del vector se encuentra el valor "<<vector[i]<<" el cual es equivalente a la suma de los demas elementos del vector";
            cout<<""<<endl;
        }
        
    }

}


