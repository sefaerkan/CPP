#include <iostream>
#include <stdlib.h>
#include <time.h>

#define kupa (0)
#define sinek (1)
#define maca (2)
#define karo (3)
//is a
//has a(Bir sınıf bir sınıfı kullanır,sahiptir)
#define as (0)
#define vale (10)
#define kiz (11)
#define kral (12)
using namespace std;
class Kart{
	private:
		int seri;
		int deger;
		public:
			Kart(int seri=kupa,int deger=2): seri(seri),deger(deger){}
			int getSeri()const{return seri;}
			int getDeger()const{return deger;}
			void yazdir()const{
				switch(seri){
					case kupa:
						cout<< "Kupa";
						break;
					case sinek:
						cout<< "Sinek";
						break;
					case maca:
						cout<< "Maca";
						break;
					case karo:
						cout<< "Karo";
						break;			
				}
				cout<<" ";
				switch(deger){
					case as:
						cout<< "As";
						break;
					case vale:
						cout<< "Vale";
						break;
					case kiz:
						cout<< "Kiz";
						break;
					case kral:
						cout<< "Kral";
						break;
					default:
						cout<< deger+1;
				}
				cout<<endl;
			}
};
class Deste{
	Kart kartlar[52];
	int top;
	public:
		Deste(){
			top=0;
			for(int i=0;i<52;i++){
				kartlar[i]=Kart(i/13,i%13); //0 dan 3 kadar,asdan başlayıp krala gitmesi
			}
		}
		void yazdir(){
			for(int i=0;i<52;i++){
				kartlar[i].yazdir();	
			}
		}
		void karistir(int kackere=50){
			Kart temp;
			for(int i=0;i<kackere;i++){
				int x= rand() % 52;
				int y= rand() % 52;
				temp=kartlar[x];
				kartlar[x]=kartlar[y];
				kartlar[y]=temp;	
			}	
		}
		Kart getir(){
			return	kartlar[top++];
		}
};
int main() {
	srand(time(0));
	Deste d;
	d.yazdir();
	d.karistir(500);
	cout<<endl<<endl;
	d.yazdir();
	cout<<endl<<endl;
	d.getir().yazdir();
	d.getir().yazdir();
	return 0;
}
