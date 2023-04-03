//20.12.2020
#include <iostream>
using namespace std;
class Kolon{
	int* data;
	int boyut;
	public:
	Kolon(int boyut = 1) : boyut(boyut){
		data = new int[boyut];
		//cout<<boyut<< " elemanli bir dizi olusturuldu" << endl;
	}
	Kolon(const Kolon& k){
		this->boyut=k.boyut;
		data = new int[boyut];
		for(int i=0;i<boyut;i++){
			data[i]=k.data[i];
			}
			//cout << "Kopyalama Kurucusu Calisti"<<endl;
	}
	
	
	~Kolon(){ 
    delete[] data; 	
	//cout<<"Yikici calisti. Dizi silindi"<< endl;
	}
	
	void set(int indis,int value){
		if(indis < boyut){
			data[indis] = value;
		}
	}
	const int* getData()const{return data;}
	
	int getBoyut(){return boyut;}
	void setBoyut(int boyut){this->boyut=boyut;}
	void print()const{
      for(int i=0;i<boyut;i++)
	       cout<<data[i]<<" ";
	       cout<<endl;
	}
	
	Kolon topla(const Kolon&k)const{
	   if(boyut == k.boyut){
	   Kolon temp(boyut);
	   	for(int i=0;i<boyut;i++){
	   		temp.data[i]=data[i] + k.data[i];
	   		}
		   return temp;
	   }
	   }
	   
	   Kolon carpma(const Kolon& k)const{
	    if(boyut == k.boyut){
	    Kolon temp(boyut);
		for(int i=0;i<boyut;i++){
	   		temp.data[i]=data[i] * k.data[i];
	   		}
	   		return temp;
		}
	   }
	double ortlamaHesapla()const{
		int ara=0;
		for(int i=0;i<boyut;i++){
			ara+= data[i];
		}
		return (double)ara / boyut;
	}
	
	
};

int main(int argc, char** argv) {
	Kolon k(3);
	k.set(0,5);
	k.set(1,3);
	k.set(2,10);
	
	Kolon k2(3);
	k2.set(0,10);
	k2.set(1,2);
	k2.set(2,3);
	k.print();
	k2.print();
	cout<<endl<<endl;
	(k.topla(k2)).print();
	cout<<endl;
	(k.carpma(k2)).print();
    cout<<endl;
    cout<<"K nin ortalamasi: "<<k.ortlamaHesapla()<<endl;
	cout<<endl;
    cout<<"K2 nin ortalamasi: "<<k2.ortlamaHesapla()<<endl;
	return 0;
}
