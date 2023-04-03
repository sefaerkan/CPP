#include <iostream>
using namespace std;
class Matematik{
	public:
		static void cube(int x){
			cout<<x*x*x<<endl;
		}
		static void add5(int x){
		cout<<x+5<<endl;	
		}
};

int main(int argc, char** argv) {
	Matematik::cube(3);
	Matematik::add5(15);
	
	
	return 0;
}
