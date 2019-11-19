#include <iostream>
using namespace std;

template <typename Tipo1, typename Tipo2>
void swap(Tipo1 &a, Tipo2 &b){
    Tipo1 aux{0};
    aux=a;
    a=b;
    b=aux;
}
