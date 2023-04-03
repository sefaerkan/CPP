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
	const Test test1(10); //const kullanýlan yerin deðeri deðiþmez
	//test1.a=20; böyle deðer deðiþtiremeyiz çünkü const kullanýlmýþ.
	cout<<test1.a<<endl;
	
	
	
	return 0;
}
