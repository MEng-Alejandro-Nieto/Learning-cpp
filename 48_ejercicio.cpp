/* 
Hacer una matriz preguntandole al usuario el numero de filas y columnas, y
llenarla con numeros aleatorios, finalmente mostrar en pantalla la matriz
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using std:: cin; using std:: cout; using std:: endl;

int main() {
    int filas,columnas;
    cout<<"Ingrese el numero de filas: "; cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;
    int matriz[filas][columnas];

    srand(time(NULL));

    for(int i{0};i<columnas;i++){
        for(int j{0};j<filas;j++){
            matriz[i][j]=1+rand()%(100);
        }
    } 

    for(int i{0};i<columnas;i++){
        for(int j{0};j<filas;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}