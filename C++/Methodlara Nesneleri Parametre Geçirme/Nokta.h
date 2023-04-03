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
	
	double uzaklikHesapla(const Nokta&); 
	
	void ekranayaz();   
	
	bool baslangictaMi();
};
#include "Nokta.cpp"
#endif
