#include <iostream>
using namespace std;
class Insan{
	public:
		string isim;
		Insan(string isim="Isimsiz"): isim(isim){}
};
class Sporcu:public Insan{
	public:
		string takimAdi;
		Sporcu(string isim="Isýmsiz",string takimAdi="Isimsiz"): Insan(isim), takimAdi(takimAdi){}
};
class Programci: public Insan{
	public:
		string progDili;
		Programci(string isim="Isýmsiz",string progDili="Isimsiz"): Insan(isim),progDili(progDili){}
};

int main() {
	Insan i("Ahmet");
	Sporcu s("Alex","Fenerbahce");
	Programci p("Arif","C++");
	cout<<i.isim<<endl;
	cout<<s.isim<<" "<<s.takimAdi<<endl;
	cout<<p.isim<<" "<<p.progDili<<endl;
	
	Insan* dizi[3];
	dizi[0]=&i;
	dizi[1]=&s;
	dizi[2]=&p;
	/*cout<<endl;
	for(int i=0;i<3;i++){
		if(dizi[i]->isim=="Arif"){
			cout<<"Var"<<endl;
		}
	}
	*/
	cout<<endl;
	Sporcu* ss = (Sporcu*)dizi[1];
	Programci* pp=(Programci*)dizi[2];
	cout<<ss->takimAdi<<endl;
	cout<<pp->progDili<<endl;
	
	Sporcu* hata =(Sporcu*)dizi[2];
	cout<<hata->isim<<" "<<hata->takimAdi<<endl; //Sporucuya çevirdik ama programciya döndü hatayý anladýk
	
	
	
	return 0;

}
