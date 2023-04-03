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
	
	void showInfos(){
		
	cout<<"Isim:"<<this->name<<endl;
	cout<<"Maas:"<<this->salary<<endl;
	cout<<"Id:"<<this->id<<endl;
	}
	};
	void deneme(Employee* ptr){ //pointer kullandýk çünkü yer kaplamýyor fazladan bir obje üretmiyor.
		ptr->showInfos();
	}

int main(int argc, char** argv) {
	Employee employee("Sefa",3000,12);
	deneme(&employee); //Adresi ile yolladýk.
	
	
	
	
	
	
	
	
	
	return 0;
}
