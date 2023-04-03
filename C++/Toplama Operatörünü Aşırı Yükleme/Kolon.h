#ifndef _KOLON_H_
#define _KOLON_H_
#include <iostream>
using namespace std;
class Kolon{
	int* data;
	int boyut;
	public:
		Kolon(int =1);
		
		Kolon(const Kolon&);
		
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
};
#include "Kolon.cpp"		
#endif		
		
		
		
