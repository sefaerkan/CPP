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
};	
	
	
int main(int argc, char** argv) {
	insan ali("12345678910","Ali","Atabak");
	cout<<ali.getTc() <<" " << ali.getIsim() << " " << ali.getSoyisim()<<endl;
	ogrenci ogr("421","1234567899","Sefa","Erkan");
	cout<<ogr.getNo()<<" "<<ogr.getTc()<<" "<<ogr.getIsim()<<" "<<ogr.getSoyisim()<<endl;
	
	return 0;
}
