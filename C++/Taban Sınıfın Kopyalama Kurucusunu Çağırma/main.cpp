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
};

int main(int argc, char** argv) {
	/*Base b(100);
	cout<<b.ptr << "\t" << *b.ptr<<endl;
	Base xb = b;
	cout<<xb.ptr << "\t" << *xb.ptr<<endl;
	*/
	Derived d(10,25);
	cout<<d.ptr2 <<"\t" <<*d.ptr2<<endl;
	Derived xd = d;
	cout<<xd.ptr2 <<"\t" <<*xd.ptr2<<endl;
	cout<<endl;
	cout<<d.ptr <<"\t" <<*d.ptr<<endl;
	cout<<xd.ptr <<"\t" <<*xd.ptr<<endl;
	
	
	
	
	return 0;
}
