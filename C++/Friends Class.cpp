#include <iostream>
using namespace std;
class Employee{
	private:
		string name;
		int age;
		int salary;
	public:
		Employee(string name,int age,int salary){
			this->name = name;
			this->age = age;
			this->salary = salary;
			}
	friend class Test; //private bilgilere eri�mek isteyen class s�n�f�n� friends olarak tan�tt�k.
	};
	class Test{
	 public:
	 	static void showInfos(Employee employee){
	 		
	 		cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl; //Private bilgilere eri�ilmek istenen yer.
		 }
		 };
	
	
	int main(int argc, char** argv) {
	Employee employee("Sefa",20,3200);
	Test::showInfos(employee);
	
	return 0;
}
