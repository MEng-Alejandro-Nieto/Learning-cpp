/*
escriba un programa que defina una matriz de 3X3 y que muestre 
unicamente los valores de la diiagonal principal.
*/

#include <iostream>

using std:: cin; using std:: cout; using std:: endl;

int main() {
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i{0};i<3;i++){
        for(int j{0};j<3;j++){
            if(i==j){
                cout<<matriz[i][j]<<endl;
            }
        }

    }



    return 0;
}