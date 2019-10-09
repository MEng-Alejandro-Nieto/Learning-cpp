/*
Realice un programa que calcule el producto de dos matrices cuadradas
de 3X3.
*/
#include <iostream>
#include <conio.h>

using std::cin; using std::cout; using std::endl;


int main(){
    int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3]={{9,8,7},{6,5,4},{3,2,1}}, resultado[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp{0};
            for(int k=0;k<3;k++){
                temp=temp+matriz1[i][k]*matriz2[k][j];
                if(k==2){
                    resultado[i][j]=temp;
                }
            }
        
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<resultado[i][j]<<" ";
        }
        cout<<endl;
    }

}