#include <iostream>
using namespace std;
class insan {
	protected:
	string tc;
	string isim;
	string soyisim;
	public:
		insan(string tc= "",string isim= "",string soyisim= ""):tc(tc),isim(isim),soyisim(soyisim){}
		string getTc(){ return tc;}
		string getIsim(){ return isim;}	
	 	string getSoyisim(){ return soyisim;}
	 	void setTc(string tc){ this->tc=tc;}
	 	void setIsim(string isim){ this->isim=isim;}
	 	void setSoyisim(string soyisim){ this->soyisim=soyisim;}
};
class ogrenci:public insan{
	private:
		string ogrenciNo;
	public:
		ogrenci(string ogrenicNo="",string tc= "",string isim= "",string soyisim= ""):ogrenciNo(ogrenicNo),insan(tc,isim,soyisim) {}
		string getNo(){ return ogrenciNo;}
		void setNo(string ogrenciNo){ this->ogrenciNo=ogrenciNo;}
		void yazdir(){ //eðer insan sýnýfýnda protected yerine private olaydý burada hata alýrdýk.
			cout<<"Ogrenci No\t: "<< ogrenciNo<<endl
			<<"Tc No\t\t: "<< tc<<endl
			<<"Isim\t\t: "<<isim<<endl
			<<"Soyisim\t\t: "<<soyisim <<endl;
		}
};	
	
	
int main(int argc, char** argv) {
	ogrenci ogr("421","1234567899","Sefa","Erkan");
	ogr.yazdir();

	
	return 0;
}
