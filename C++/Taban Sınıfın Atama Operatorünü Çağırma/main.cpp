#include <iostream>
using namespace std;
class Base{
	public:
		int* ptr;
		Base(int i = 1){
			cout<<"Base Kurucu" <<endl;
			ptr = new int(i);
		}
		
		Base(const Base& b){
			cout<<"Base kopyalama Kurucu" <<endl;
			ptr = new int(*b.ptr);
		}
		Base& operator=(const Base& b){ //Taban Sýnýf Atama Operatörü
			cout<<"Base operator="<<endl;
			delete ptr;
			ptr = new int(*b.ptr);
			return *this;
		}
};
class Derived:public Base{
	public:
		int* ptr2;
		Derived(int i=3,int j=2):Base(i){
			cout<<"Derived Kurucu" <<endl;
			ptr2 = new int(j);
		}
		
		Derived(const Derived& d):Base(d){ 
			cout<<"Derived Kopyalama Kurucu" <<endl;
			ptr2 = new int(*d.ptr2);
		}
		Derived& operator=(const Derived& d){ //Atama Operatörü
			Base::operator=(d); //Taban Sýnýfýn Atama Operatorünü Çaðýrma
			cout<<"Derived operator="<<endl;
			delete ptr2;
			ptr2 = new int(*d.ptr2);
			return *this;
		}
		
};

int main() {
	Derived d(100,200);
	cout<<"Main 1 : ptr "<<d.ptr<<" ptr2: "<<d.ptr2<<endl;
	Derived xd(300,400);
	cout<<"Main 2 : ptr "<<xd.ptr<<" ptr2: "<<xd.ptr2<<endl;
	xd=d;
	cout<<"Main 3 : ptr "<<xd.ptr<<" ptr2: "<<xd.ptr2<<endl;
	
	return 0;
}
