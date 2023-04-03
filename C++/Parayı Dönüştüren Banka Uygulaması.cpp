#include <iostream>

using namespace std;

int main() 
{
int secim;
double cevir,para = 1000;
string kullaniciadi , sifre;

cout<<"Bankamiza Hosgeldiniz";
cout<<"\nKullanici Adi Giriniz:"<<endl;
cin>>kullaniciadi;
cout<<"\nSifrenizi Giriniz:"<<endl;
cin>>sifre;

if(kullaniciadi == "user45" && sifre == "1234asd")
{
	cout<<"1-TL'yi dolara cevir\n2-TL'yi euro'ya cevir\n3-TL'yi sterline cevir\n4-Cikis Yap\n";
	cout<<"Secim Yapiniz: ";
	cin>>secim;
	while(secim<1 || secim>4)
	{
		cout<<"1 ile 4 arasýnda bir secim yapýnýz";
		cin>>secim;
	}
	
	if(secim == 1)
	{
		cevir = para / 7.80;
		cout<<"Paraniz Donustulurdu,Yeni paraniz: "<<cevir<<" Dolar vardir";
	}
	else if(secim == 2)
	{
		cevir = para / 8.70;
		cout<<"Paraniz Donustulurdu,Yeni paraniz: "<<cevir<<" Euro vardir";
	}
	else if(secim == 3)
	{
		cevir = para / 10.2;
		cout<<"Paraniz Donustulurdu,Yeni paraniz: "<<cevir<<" Sterlin vardir";
	}
	else
	{
		cout<<"Basari ile cikis yaptiniz";
	}
	}

else
{
	cout<<"Kullanici adi veya sifre hatalidir";
	cout<<"\nCikis Yaptiniz";
}
	
	
	
	
	
	
	
	
	return 0;
}
