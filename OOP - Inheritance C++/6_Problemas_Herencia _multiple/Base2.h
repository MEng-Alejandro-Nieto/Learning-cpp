#include <iostream>
using namespace std;

class Base2{
	protected:
		int x;
	public:
		Base2(int x){
			this-> x = x;
		}
		~Base2(){
			cout<<"Se detruyo la clase Base2"<<endl;
		}
		int get_x(){
			return x;
		}		
		
};










