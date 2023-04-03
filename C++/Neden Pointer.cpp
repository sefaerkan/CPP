#include <iostream>
using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
	
	public:
	    Employee(string name,int salary,int id){ //constructor olarak kullan�yoruz direkt bilgileri girmek i�in
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
	void deneme(Employee* ptr){ //pointer kulland�k ��nk� yer kaplam�yor fazladan bir obje �retmiyor.
		ptr->showInfos();
	}

int main(int argc, char** argv) {
	Employee employee("Sefa",3000,12);
	deneme(&employee); //Adresi ile yollad�k.
	
	
	
	
	
	
	
	
	
	return 0;
}
