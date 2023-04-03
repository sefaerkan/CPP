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
	friend class Test; //private bilgilere eriþmek isteyen class sýnýfýný friends olarak tanýttýk.
	};
	class Test{
	 public:
	 	static void showInfos(Employee employee){
	 		
	 		cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl; //Private bilgilere eriþilmek istenen yer.
		 }
		 };
	
	
	int main(int argc, char** argv) {
	Employee employee("Sefa",20,3200);
	Test::showInfos(employee);
	
	return 0;
}
