#include <iostream>
using namespace std;

class A{
	private:
		int priA;
	protected:
		int proA;
	public:
		int pubA;
		A():pubA(0),proA(1),priA(2){}	
};

class B:protected A{ //private yaparsak C deki x de pubA yazamayýz.
	private:
		int priB;
	protected:
		int proB;
	public:
		int pubB;
		B():A(),pubB(3),proB(4),priB(5){}
		void yazdir(){
			cout<<A::pubA <<" "<< A::proA << endl;
		}
};
class C:public B{ 
	public:
		void x(){
			cout<<A::pubA<< endl;	
		}
};

int main(int argc, char** argv) {
	B b;
	//cout<< b.priA << endl;
	//b.yazdir();
	C c;
	c.x();
	
	return 0;
}
