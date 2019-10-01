/*
Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y
columnas, y posteriormente mostrar la matriz en pantalla.
*/

#include <iostream>

using std:: cin; using std:: cout; using std:: endl;

int main(){
int filas, columnas;
cout<<"Numero de filas: "; cin>>filas;
cout <<"Numero de columnas: ";
cin>>columnas;
    int matriz[filas][columnas];
    for (int i{0};i<columnas;i++){
     for(int j{0};j<filas;j++){
      cout<<"Ingrese el valor de la matriz en la posicion ["<<i<<", "<<j<<"]: ";
      cin>>matriz[i][j];
     }
    }
 
for (int i{0};i<columnas;i++){
for(int j{0};j<filas;j++){
 cout<<matriz[i][j]<<" ";
 
}
cout<<endl;
}


return 0;
}