#ifndef _KOLON_
#define _KOLON_
#include "Kolon.h"
Kolon::Kolon(int boyut) : boyut(boyut){
	data = new int[boyut];
}

Kolon::Kolon(const Kolon& k){ //Kopyalama kurucsu
	*this = k; //Basit hale getirdik
    }
    
Kolon::~Kolon(){delete[] data;}

void Kolon::set(int indis,int value){
		if(indis < boyut){
			data[indis] = value;
	}
	}   
	
const int* Kolon::getData()const{return data;}

int Kolon::getBoyut(){return boyut;}

void Kolon::setBoyut(int boyut){this->boyut=boyut;}

void Kolon::print()const{
      for(int i=0;i<boyut;i++)
	       cout<<data[i]<<" ";
	       cout<<endl;
	}

Kolon Kolon::topla(const Kolon&k)const{
	   if(boyut == k.boyut){
	   Kolon temp(boyut);
	   	for(int i=0;i<boyut;i++){
	   		temp.data[i]=data[i] + k.data[i];
	   		}
		   return temp;
	   }
	   }

Kolon Kolon::carpma(const Kolon& k)const{
	    if(boyut == k.boyut){
	    Kolon temp(boyut);
		for(int i=0;i<boyut;i++){
	   	temp.data[i]=data[i] * k.data[i];
	   	}
	   	return temp;
	}
	}

double Kolon::ortHesapla()const{
		int ara=0;
		for(int i=0;i<boyut;i++){
			ara+= data[i];
		}
		return (double)ara / boyut;
	}
Kolon Kolon::operator+(const Kolon& k)const{ //�ki diziyi topluyoruz
    if(boyut == k.boyut){
    Kolon temp(boyut);
	for(int i=0;i<boyut;i++){
	   	temp.data[i]=data[i] + k.data[i];
	}
	return temp;
    }
    }	
	Kolon Kolon::operator+(const int x)const{ //Dizi ile int de�er topluyoruz.
	Kolon temp(boyut);
	for(int i=0;i<boyut;i++){
	   	temp.data[i]=data[i] + x;
	}
	return temp;
	}
	
	void Kolon::operator=(const Kolon& k){ //Kopyalama kurucusu i�levi g�r�yor ama fark� var.
		delete[] data;
		boyut = k.boyut;
		data = new int[boyut];
		for(int i=0; i<boyut;i++){
			data[i] = k.data[i];
	}
	}
	const int& Kolon::operator[](int indis)const{
	if(indis>=0 && indis<boyut){
		return data[indis];
	}
	
	
	}
	
	
#endif	
	
	
	 
