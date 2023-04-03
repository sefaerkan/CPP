#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int ortalama=0, toplam=0,enbuyuk,enkucuk,fark=0,ortalama2=0,sayi,ilksayi;
	cout<<"Ýlk sayi gir"<<endl;
	cin>>ilksayi;
	int i =1;
	ilksayi = enbuyuk;
	ilksayi = enkucuk;
	toplam +=ilksayi;
	ortalama = toplam / i;
	for(i=1;i<100;i++){
	cout<<"Diðer Sayýlarý girin"<<endl;
	cin>>sayi;
	if(sayi>enbuyuk){
		sayi = enbuyuk;
	}
	else if(sayi<enkucuk){
		sayi = enkucuk;
	}
	toplam = toplam + sayi;
	}
	ortalama = toplam / 100;
	fark = enbuyuk - enkucuk;
	ortalama2=(ortalama+fark)/2;
	cout<<"Ortalama: "<<ortalama<<endl;
	cout<<"Fark: "<<fark<<endl;
	cout<<"Ortalama 2: "<<ortalama2<<endl;
	
	return 0;
}
