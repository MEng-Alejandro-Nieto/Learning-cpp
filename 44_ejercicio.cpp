/* 
Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados por 2 u muestre el segundo arreglo
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main(){
    int vector1[5]; int len1=sizeof(vector1)/sizeof(vector1[0]);
    for(int i{0};i<len1;i++){
        cout<<"Digite un numero en la posicion "<<i<<": "; cin>>vector1[i];
    }
    int vector2[len1];
    cout<<"[";
    for (int i{0};i<len1;i++){
        vector2[i]=vector1[i]*2;
        if (i==len1-1){
            cout<<vector2[i];
        }
        else{
            cout<<vector2[i]<<",";
        }
    }
    cout<<"]";
}









