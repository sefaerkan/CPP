#include <iostream>
using namespace std;

class Test{
	public:
		int a;
		Test(int a){
			this->a=a;
			}
};

int main(int argc, char** argv) {
	const Test test1(10); //const kullan�lan yerin de�eri de�i�mez
	//test1.a=20; b�yle de�er de�i�tiremeyiz ��nk� const kullan�lm��.
	cout<<test1.a<<endl;
	
	
	
	return 0;
}
