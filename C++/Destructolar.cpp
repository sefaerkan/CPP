#include <iostream>
using namespace std;
class Employee{
	public:
		Employee(){
			cout<<"Constructor cagirildi"<<endl;
		}
		~Employee(){ //Destructor
			cout<<"Dectructor cagirildi"<<endl;
		}
};

int main(int argc, char** argv) {
	Employee *emp = new Employee();
	delete emp; //Silme i�lemi olduktan sonra destructor �a��r�l�r.
	
	
	return 0;
}
