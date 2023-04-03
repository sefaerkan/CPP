#include<iostream>
using namespace std;
#include "Nokta.h"
class cizgi{
private:
	Nokta baslangic;
	Nokta bitis;
public:
	cizgi(Nokta baslangic,Nokta bitis) : baslangic(baslangic), bitis(bitis){
	
	
	}
	
	double uzunluk()const{
	return baslangic.uzaklikHesapla(bitis);
	}
	
	void yazdir()const{
	cout<< "Baslangic Noktasi = ";	
	baslangic.ekranayaz();
	cout<< "Bitis Noktasi = ";
	bitis.ekranayaz();
	cout<<"Cizginin Uzunlugu = "<< uzunluk() << endl;
	}
		
};


int main(int argc, char** argv) {
	cizgi c(Nokta(0,0),Nokta(5,5));
	c.yazdir();
	

	
	
	return 0;
}
