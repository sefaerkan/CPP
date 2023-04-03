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
	friend void showInfos(Employee employee); //Classýn privete bilgilerini kullanmasý için fonksiyonu friends olarak tanýttýk.
	};
	void showInfos(Employee employee){ //Privete bilgileri kullanan fonksiyon
		cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl;
	}
	int main(int argc, char** argv) {
	Employee employee("Sefa",20,3200);
	showInfos(employee);
	
	return 0;
}
