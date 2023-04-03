#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"
Nokta::Nokta() : t(0){
	x=0;
	y=0;
	z= new int(5);
	//t=0; hatalý
	//cout<<"Parametresiz Kurucu"<<x<<" " <<y<<endl;
	i++;
}

Nokta::Nokta(int x,int y,int t=0) : t(t){
	this->x=x;
	this->y=y;
	//this->t=t; hatalý
	//cout<<"Parametreli Kurucu: "<<x<<" " <<y<<endl;
	z = new int(6);
	i++;
}

Nokta::Nokta(const Nokta& n) : t(n.t){
	x = n.x;
	y = n.y;
	z = new int(*n.z);
	//cout<<"Kopyalama Kurucusu: "<<x<<" " <<y<<endl;
	i++;
}

Nokta::~Nokta(){
	//cout<<"Yikici Calisti"<<endl;
	i--;
	delete z;
}

int Nokta::getX()const{
  int _x= 2*x;
  return x;
}

int Nokta::getY()const{
   return y;
}

void Nokta::setX(int x){
	this->x=x;
}

void Nokta::setY(int _y){
	if(_y>5)
	  y=_y;
	else
	  y=2;
}
void Nokta::ekranayaz(){
	cout<<x<<"," <<y<<endl;
}

bool Nokta::baslangictaMi(){
	return x == 0 && y == 0;
}

#endif
