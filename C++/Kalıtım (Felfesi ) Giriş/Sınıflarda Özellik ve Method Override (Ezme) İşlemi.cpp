#include <iostream>
using namespace std;
//override != overloading

class Base{
	public:
		int data[100];
		int size;
		Base():size(0){} //Kurucu fonskiyon ve size deðeri 0
		void add(int value){
			data[size] = value;
			size++;
		}
		
		void print()const{
			cout<< "Base print()"<<endl;
			for(int i=0;i<size;i++){
				cout<< data[i] << " ";
			}
		}
};
class Derived:public Base{
	private:
		float data[100];
		int size;
	public:	
		Derived():size(0){} //Kurucu fonskiyon ve size deðeri 0
		void add(float value){
			data[size] = value;
			size++;
		}
		
		void print()const{
			Base::print();
			cout<<endl;
			cout<< "Derived print()"<<endl;
			for(int i=0;i<size;i++){
				cout<< data[i] << " ";
			}
		}
		void addInt(int value){
			Base::add(value);
		}
	
};


int main(int argc, char** argv) {
	Base b;
	b.add(10);
	b.add(25);
	b.add(33);
	b.print();
	cout<<endl;
	Derived d;
	d.addInt(5);
	d.addInt(7);
	d.add(1.5);
	d.add(2.7);
	d.add(3.5);
	d.print();
	cout<<endl;
	cout<<d.size<<endl;
	
	
	return 0;
	
}
