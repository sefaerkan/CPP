#include <iostream>
using namespace std;
class Kedi{
	public:
		virtual void sesVer(){ //Taban sýnýfýn fonskiyonu alt sýnýftakini ezmesin diye virtual kullandýk
			cout<<"Miyav"<<endl;
		}
};
class Aslan : public Kedi{
	public:
		void sesVer(){
			cout<<"Kukre"<<endl;
		}
};

int main(int argc, char** argv) {
	Kedi k;
	k.sesVer();
	Aslan a;
	a.sesVer();
	Kedi* dizi[2];
	dizi[0] = &k;
	dizi[1] = &a;
	cout<<endl;
	dizi[0]->sesVer();
	dizi[1]->sesVer();
	
	
	return 0;
}
