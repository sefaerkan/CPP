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
		~Base(){
			cout<<"Base Yikici"<<endl;
			delete ptr;
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
		~Derived(){
			cout<<"Derived Yikici"<<endl;
			delete ptr2;
		}
};

int main(int argc, char** argv) {
	int *p1,*p2;
	{
	Derived d(100,200);
	p1=d.ptr;
	p2=d.ptr2;
	cout<<d.ptr<< " " <<d.ptr2<<endl;
	cout<<p1<< " "<<p2<<endl;
	cout<<*d.ptr<< " " <<*d.ptr2<<endl;
	}
	cout<<p1<< " "<<p2<<endl;
	cout<<*p1<< " "<<*p2<<endl; //Yýkýcý kullanmasaydýk 100 ve 200 deðerleri basýlacaktý
	
	
	return 0;
}
