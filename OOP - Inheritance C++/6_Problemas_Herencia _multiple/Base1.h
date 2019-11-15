#include <iostream>
using namespace std;

class Base1{
	protected:
		int x;
		
	public:
		Base1(int x){
			this -> x = x;
		}
		~Base1(){
			cout<<"Se detruyo la clase Base1"<<endl;
		}
		
		int get_x(){
			return x;
		}
};
