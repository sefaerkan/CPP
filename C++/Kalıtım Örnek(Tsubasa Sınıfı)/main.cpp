#include <iostream>
using namespace std;
// is a(Bir s�n�f�n bir s�n�f� kal�t�m almas�, m�d�r de personeldir hem personel hemde m�d�r �zelliklerine sahiptir.
//has a(Bir s�n�f�n di�er s�n�f� �zellik olarak almas�d�r.)

class Oyuncu{
	public:
		string isim;
		int level;
		Oyuncu(string isim): isim(isim),level(1){}
		void sutCek(){
			cout<<isim<<" oyuncusu "<<level * 10<<" hizinda bir sut cekiyor.."<<endl;
		}
		void antermanYap(){
			cout<<isim<<" antreman yapiyor..."<<endl;
			level++;
		}
		
		
};
class Tsubasa:public Oyuncu{
	public:
		Tsubasa() : Oyuncu("Tsubasa"){}
		void kartalSutuCek(){
			cout<<isim<<" oyuncusu "<<level * 20<<" hizinda bir kartal sutu cekiyor.."<<endl;	
		}
};

int main(int argc, char** argv) {
	Oyuncu o1("Takeshi");
	Oyuncu o2("Misaki");
	o1.sutCek();
	o1.antermanYap();
	o1.sutCek();
	cout<<endl;
	o2.sutCek();
	Tsubasa t;
	t.sutCek();
	t.kartalSutuCek();
	t.antermanYap();
	t.antermanYap();
	t.sutCek();
	t.kartalSutuCek();
return 0;
}
