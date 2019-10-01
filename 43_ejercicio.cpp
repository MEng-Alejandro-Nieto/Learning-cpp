/*
Realiza un programa que defina dos vectores de caracteres y despues 
almacene el contenido de ambos vectores en un nuevo vector, situando 
en primer lugar los elementos del primer vector seguido por los 
elementos del segundo vector y muestra el contenido del nuevo vector
en la salida estandar
*/

#include <iostream>
using std:: cin; using std:: cout; using std:: endl;

int main(){
    char vector1[]={'a','e','i','o','u'}; int len1=sizeof(vector1)/sizeof(vector1[0]);
    char vector2[]={'b','c','d','f','g'}; int len2=sizeof(vector2)/sizeof(vector2[0]);
    char vector3[len1+len2];
    for (int i{0};i<len1;i++){
        vector3[i]=vector1[i];
    }
    for (int i{5};i<(len1+len2);i++){
        vector3[i]=vector2[i-5];
    }
    int len3 = sizeof(vector3)/sizeof(vector3[0]);
    for(int i{0};i<len3;i++){
        cout<<vector3[i]<<" ";
    }

}






