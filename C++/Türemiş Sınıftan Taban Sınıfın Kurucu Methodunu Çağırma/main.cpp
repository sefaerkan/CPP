#include <iostream>
using namespace std; 

class Base{
	private:
		int* ptr;
		double* fPtr;
	public:
		
		Base(int i){
			cout<<"int kurucu"<<endl;
			ptr=new int(i);	
	}
		Base(double i){
			cout<<"double kurucu"<<endl;
			fPtr = new double(i);
		}	
		int getPtr(){
			return *ptr;
		}	
	
	
};
class Derived:public Base{
	public:
		int* ptr2;
		Derived(int i=0,int j=0):Base(i){ // Türemiþ Sýnýftan Taban Sýnýfýn Kurucusunu çaðýrýp deðer verdik
			ptr2=new int(j);
		}
};


int main() {
	//Base b(100);
	//cout<<*b.ptr;
	Derived d(50,100);
	//cout<<*d.ptr<<endl;
	cout<<d.getPtr()<<endl;
	cout<<*d.ptr2<<endl;
	
	return 0;
}
