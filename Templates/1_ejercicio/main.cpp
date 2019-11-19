#include <iostream>
#include "Swap.h"
using namespace std;

int main(int argc, char** argv) {
	int a{0};
	float b{0};
	cout<<"Numero a: "; cin>>a;
	cout<<"Numero b: "; cin>>b;

	swap(a,b);
	cout<<"El numero a es ahora: "<<a<<endl;
	cout<<"El numero b es ahora: "<<b<<endl;

	return 0;
}
