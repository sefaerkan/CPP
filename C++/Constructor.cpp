#include <iostream>
using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
	
	public:
	    Employee(string isim,int maas){ //constructor olarak kullanýyoruz direkt bilgileri girmek için
	    	name =isim;
	    	salary=maas;
	    
		}	
	
	void showInfos(){
		
	cout<<"Isim:"<<name<<endl;
	cout<<"Maas:"<<salary<<endl;
	}
	};

int main(int argc, char** argv) {
	Employee employee("Sefa Erkan",5000);
	employee.showInfos();
	
	
	
	
	
	
	
	
	
	return 0;
}
