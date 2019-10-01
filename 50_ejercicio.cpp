/* 
Realice un programa que calcule la suma de dos matrices cuadradas
de 3X3
*/

#include <iostream>

using std::cin; using std::cout; using std::endl;


int main (){
    int matriz1[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    int matriz2[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    int matriz3[3][3];
    for(int i{0};i<3;i++){
        for(int j{0};j<3;j++){
            matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
            cout<<matriz3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}






