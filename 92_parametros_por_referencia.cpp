//Pasos de parametros por referencias

#include <iostream>
using std::cin; using std::cout; using std::endl;

void valnuevo(int&,int&);

int main(){
    int num1, num2;
    cout<<"Digite dos numeros: "; cin>>num1>>num2;
    valnuevo(num1,num2);
    cout<<"El nuevo valor de num1 es : "<<num1<<endl;
    cout<<"El nuevo valor de num2 es : "<<num2<<endl;

    return 0;
}

void valnuevo(int& xnum,int& ynum){
    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es: "<<ynum<<endl;

    xnum=89;
    ynum=45;
}
