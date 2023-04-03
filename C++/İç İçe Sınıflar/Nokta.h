#ifndef _NOKTA_H_
#define _NOKTA_H_
#include <math.h>
class Nokta{
	private:
		int x;
		int y;
	public:
		const int t;
		int *z;
		Nokta();
		Nokta(int,int,int);
		Nokta(const Nokta&);
		~Nokta();	
	
    int getX()const;
	int getY()const;
	
	void setX(int);
	void setY(int);
	
	Nokta topla(const Nokta&)const;
	
	double uzaklikHesapla(const Nokta&)const; 
	
	void ekranayaz()const;   
	
	bool baslangictaMi();
};
#include "Nokta.cpp"
#endif
