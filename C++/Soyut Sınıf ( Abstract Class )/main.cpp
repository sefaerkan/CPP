#include <iostream>
using namespace std;

class Sekil{
	protected:
		double alan,cevre;
	public:
		virtual void senNesin() = 0;
		virtual void alanHesapla() = 0;
		virtual void cevreHesapla() = 0;//pure(soyut) method
		double getAlan()const{return alan;}
		double getCevre()const{return cevre;}
};
class Dikdortgen: public Sekil{
	double yukseklik,genislik;
	public:
		Dikdortgen(double yukseklik, double genislik) : yukseklik(yukseklik),genislik(genislik){}
		void senNesin(){cout<<"Ben diktorgenim"<<endl;}
		void alanHesapla(){alan = genislik * yukseklik;}
		void cevreHesapla(){cevre = 2*(yukseklik+genislik);}
};
class Daire: public Sekil{
	double r;
	public:
		Daire(double r) : r(r){}
		void senNesin(){cout<<"Ben daireyim"<<endl;}
		void alanHesapla(){alan = r *r * 3.141592;}
		void cevreHesapla(){cevre = 2*3.141592*r;}
};
class Kare: public Dikdortgen{
	public:
		Kare(double x) : Dikdortgen(x,x){}
		void senNesin(){cout<<"Ben kareyim"<<endl;}
};
int main() {
	Sekil* dizi[3];
	dizi[0] = new Dikdortgen(10,2);
	dizi[1] = new Daire(10);
	dizi[2] = new Kare(5);
	
	for(int i=0; i<3;i++){
		dizi[i]->alanHesapla();
		dizi[i]->cevreHesapla();
		dizi[i]->senNesin();
		cout<<"Alan: "<< dizi[i]->getAlan()<<" Cevre:"<<dizi[i]->getCevre()<<endl;
	}
	
	return 0;
}
