#include <iostream>
using namespace std;

class Test{
	private:
		int a;
		
	public:
	    Test(int a){
	    	this->a=a;
	    }
		
	int getValue() const{ //Bu metod herhangi bir de�eri de�i�tiremez ve sadece conts olan bir metodu �a��r�r.
	
	return this->a;
	}	
	};
int main(int argc, char** argv) {
	Test test1(10);
	cout<<test1.getValue()<<endl;
	
	
	
	
	return 0;
}
