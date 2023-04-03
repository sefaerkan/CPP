#ifndef _NOKTA_H_
#define _NOKTA_H_
class Nokta{
	private:
		int x;
		int y;
	public:
		const int t;
		int *z;
		static int i;
		Nokta();
		Nokta(int,int,int);
		Nokta(const Nokta&);
		~Nokta();	
	
    int getX()const;
	int getY()const;
	
	void setX(int);
	void setY(int);
	
	void ekranayaz();   
	
	bool baslangictaMi();
};
#include "Nokta.cpp"
#endif
