#ifndef _KOLON_H_
#define _KOLON_H_
#include <iostream>
using namespace std;
class Kolon{
	int* data;
	int boyut;
	void  ara(int);
	public:
		Kolon(int =1);
		
		Kolon(const Kolon&); //Kopyalama Kurucusu
		
		~Kolon();
		
		void set(int,int);
		
		const int* getData()const;
		
		int getBoyut();
		
		void setBoyut(int boyut);
		
		void print()const;
		
		Kolon topla(const Kolon&)const;
		Kolon carpma(const Kolon&)const;
		double ortHesapla()const;
		
		Kolon operator+(const Kolon&)const; //Toplama prototip. Parametre Nesne
		Kolon operator+(const int)const; //Toplama aþýrý yükleme ve parametre int deðer 
        void operator=(const Kolon&); //Atama operatörü
        int& operator[](int indis); //indis operatörü
        void operator()(int,int);//Fonksiyon Çaðrý Operatörü
        void operator++(int); //pozfix
        void operator++(); //prefix
        void operator--(int); //pozfix
        void operator--(); //prefix
};
#include "Kolon.cpp"		
#endif		
		
		
		
