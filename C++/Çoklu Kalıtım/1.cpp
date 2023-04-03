#include <iostream>
using namespace std;
class Yazici{
	protected:
		string marka;
	public:
		Yazici(string marka): marka(marka){
		cout<< "Yazici Sinifi"<<endl;
	}
};
class Tarayici{
	protected:
		string marka;
	public:
		Tarayici(string marka): marka(marka){
			cout<< "Tarayici Sinifi"<<endl;
		}
};

class TaraticiliYazici: public Yazici,public Tarayici{
	public:
		TaraticiliYazici(string m1,string m2) : Yazici(m1),Tarayici(m2){
			cout<<"TaraticiliYazici Sinifi"<<endl;
			cout<<"Yazici Marka: "<<Yazici::marka<<endl;
			cout<<"Tarayici Marka: "<<Tarayici::marka<<endl;
			
		}
};
int main() {
	TaraticiliYazici ty("Hp","Asus");
	
	
	return 0;
}
