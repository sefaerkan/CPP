#include <iostream>
using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
	
	public:
	    Employee(string name,int salary,int id){ //constructor olarak kullanýyoruz direkt bilgileri girmek için
	    	this->name =name;
	    	this->salary=salary;
	        this->id=id;
	    }
		Employee(string name,int salary){
			this->name =name;
	    	this->salary=salary;
	    	this->id=0;
		}
		Employee(){
			this->name ="Bilgi Yok";
	    	this->salary=0;
	    	this->id=0;
		}
			
	
	void showInfos(){
		
	cout<<"Isim:"<<this->name<<endl;
	cout<<"Maas:"<<this->salary<<endl;
	cout<<"Id:"<<this->id<<endl;
	}
	};

int main(int argc, char** argv) {
	Employee employee1("Sefa Erkan",5000,12);
	Employee employee2("Sena Erkan",6000);
	Employee employee3;
	employee1.showInfos();
	employee2.showInfos();
	employee3.showInfos();
	
	
	
	
	
	return 0;
}
