#include <iostream>
using namespace std;
class A{
	public:
		int x;
		A(int x=1): x(x){cout<<"A sinifi"<<endl;}
};
class B:virtual public A{ //virtual ile dnin 2 defa A sýnýfýný kalýtým almasýný engelledik
	public:
		B(){cout<<"B sinifi"<<endl;}
};
class C: virtual public A{ //virtual ile dnin 2 defa A sýnýfýný kalýtým almasýný engelledik
	public:	
		C(){cout<<"C sinifi"<<endl;}
};
class D: public B, public C{
	public:
		D(){cout<<"D sinifi"<<endl;}
};
int main() {
	A a;
	cout<<endl;
	B b;
	cout<<endl;
	C c;
	cout<<endl;
	cout<<endl;
	D d;
	cout<<endl;
	cout<<d.x;
	cout<<endl;
	d.x=25;
	cout<<d.x;
	//Diamond Problem
return 0;
}
