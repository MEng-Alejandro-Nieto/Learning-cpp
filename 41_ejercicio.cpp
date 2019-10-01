/*
Desarrolle un programa que lea de la entrada estandar un vector 
de enteros y determine el mayor elemento del vector.
*/

#include <iostream>

using std:: cin; using std:: cout; using std:: endl;

int main(){ 
    
    int array[]={10,20,12,40,60};
    int length=sizeof(array)/sizeof(array[0]);
    int max=array[0];

    for (int i{1};i<length;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"El valor maximo del arreglo es: "<<max<<endl;
    return 0;
}

