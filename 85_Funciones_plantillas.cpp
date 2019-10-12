/*
Sacar el valor absoluto de un numero
*/

#include <iostream>
#include <math.h>
using std::cin; using std::cout; using std::endl;

//PROTOTIPO DE LA FUNCION
template <class TIPO>
void absoluto(TIPO x);

int main(){
    int num1=48;
    float num2=-15.47896521;
    double num3=-4.123456789123456789456123456789;    
    
    absoluto(num1);
    absoluto(num2);
    absoluto(num3);


    return 0;
}

//DEFINICION DE LA FUNCION
template <class TIPO>
void absoluto(TIPO x){
    if(x<0){
        x=x*(-1);
    }
    cout<<x<<endl;
}


