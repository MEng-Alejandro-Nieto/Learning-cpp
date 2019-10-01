/*
Realice un programa que lea una matriz de 3X3 y cree su matriz transpuesta
*/

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpuesta[3][3];

    for(int i{0};i<3;i++){
        for(int j{0};j<3;j++){
            transpuesta[j][i]=matriz[i][j];
        }
    }
    for(int i{0};i<3;i++){
        for(int j{0};j<3;j++){
            cout<<transpuesta[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}