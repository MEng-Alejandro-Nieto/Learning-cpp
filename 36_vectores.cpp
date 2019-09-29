/*
Un vector o array unidimensional es un tipo de dato que almacena una secuencia 
de datos del mismo tipo. Los elementos de un vector se almacenan en zonas 
contiguas de memoria y se puede acceder a ellos de manera direca mediante un
*/


// inicializar un vector:


#include <iostream>
using namespace std;
int main(){
    int numeros[10];     // Inicializa un arreglo de enteros con 10 casillas
    char letras[5];     // Inicializa un arreglo de caracteres con 10 casillas
    float reales[15];   // Inicializa un arreglo de floats con 10 casillas

    int numero[]={1,2,3,4,5};               // Inicializa e inserta los numeros en el arreglo
    char letra[]={'a','b','c','d','e'};     // Inicializa e inserta los  en el arreglo
    float real[]={1.0,2.0,3.0,4.0,5.0};     // Inicializa e inserta los numeros en el arreglo
    
    for (int i{0};i<5;i++){
        cout<<numero[i]<<" ";
        cout<<letra[i]<<" ";
        cout<<real[i]<<" "<<endl;
    }


    return 0;
}












