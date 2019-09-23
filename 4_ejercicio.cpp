#include <iostream>
using namespace std;


int main(){
    float a,b,c,d,e,f,resultado1=0,resultado2=0,resultado3=0;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;
    cout<<"Digite el valor de e: "; cin>>e;
    cout<<"Digite el valor de f: "; cin>>f;

    resultado1=(a+b)/(c+d);
    resultado2=(a+(b/c))/(d+(e/f));
    resultado3=a+b/(c-d);
    cout.precision(4);
    cout<<"El resultado de la operacion 1 es: "<<resultado1<<endl;
    cout<<"El resultado de la operacion 2 es: "<<resultado2<<endl;
    cout<<"El resultado de la operacion 3 es: "<<resultado3<<endl;
    return 0;

}