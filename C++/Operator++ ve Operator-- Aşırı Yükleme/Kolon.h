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
		Kolon operator+(const int)const; //Toplama a��r� y�kleme ve parametre int de�er 
        void operator=(const Kolon&); //Atama operat�r�
        int& operator[](int indis); //indis operat�r�
        void operator()(int,int);//Fonksiyon �a�r� Operat�r�
        void operator++(int); //pozfix
        void operator++(); //prefix
        void operator--(int); //pozfix
        void operator--(); //prefix
};
#include "Kolon.cpp"		
#endif		
		
		
		
