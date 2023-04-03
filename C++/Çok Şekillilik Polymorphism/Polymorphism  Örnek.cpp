#include <iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h> 
using namespace std;
// is a(Bir sýnýfýn bir sýnýfý kalýtým almasý, müdür de personeldir hem personel hemde müdür özelliklerine sahiptir.
//has a(Bir sýnýfýn diðer sýnýfý özellik olarak almasýdýr.)

class Oyuncu{
	public:
		string isim;
		int level;
		Oyuncu(string isim): isim(isim),level(1){}
		virtual void sutCek(){
			cout<<isim<<" oyuncusu "<<level * 10<<" hizinda bir sut cekiyor.."<<endl;
		}
		void antermanYap(){
			cout<<isim<<" antreman yapiyor..."<<endl;
			level++;
		}
		
		
};
class Tsubasa:public Oyuncu{
	private:
		void kartalSutuCek(){
			cout<<isim<<" oyuncusu "<<level * 20<<" hizinda bir kartal sutu cekiyor.."<<endl;	
		}
	public:
		Tsubasa() : Oyuncu("Tsubasa"){}
		void sutCek(){
			if(rand() % 2)
				kartalSutuCek();
			else
				Oyuncu::sutCek();	
		}
};

int main(int argc, char** argv) {
	srand(time(0)); 
	Oyuncu* dizi[11];
	dizi[0] = new Oyuncu("Wakabayashi");
	dizi[1] = new Oyuncu("Kishida");
	dizi[2] = new Oyuncu("Nishio");
	dizi[3] = new Oyuncu("Nakayama");
	dizi[4] = new Oyuncu("Urabe");
	dizi[5] = new Oyuncu("Takasugi");
	dizi[6] = new Oyuncu("Taki");
	dizi[7] = new Oyuncu("Izawa");
	dizi[8] = new Oyuncu("Kisugi");
	dizi[9] = new Tsubasa();
	dizi[10] = new Oyuncu("Misaki");
	
	for(int i=0;i<10;i++){
		//int x= rand() % 11;
		//dizi[x]->sutCek();
		dizi[9]->sutCek();
	}
	
return 0;
}
