#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"
Nokta::Nokta() : t(0){
	x=0;
	y=0;
	z= new int(5);
	//t=0; hatalý
	cout<<"Parametresiz Kurucu"<<x<<" " <<y<<endl;
}

Nokta::Nokta(int x,int y,int t=0) : t(t){
	this->x=x;
	this->y=y;
	//this->t=t; hatalý
	z = new int(6);
	//cout<<"Parametreli Kurucu: "<<x<<" " <<y<<endl;
}

Nokta::Nokta(const Nokta& n) : t(n.t){
	x = n.x;
	y = n.y;
	z = new int(*n.z);
	//cout<<"Kopyalama Kurucusu: "<<x<<" " <<y<<endl;
}

Nokta::~Nokta(){
	//cout<<"Yikici Calisti"<<endl;
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

double Nokta::uzaklikHesapla(const Nokta& n)const{
	int xU = pow(n.getX() - x,2); //Farklarýn Karesini Alacaðýz
    int yU = pow(n.getY() - y,2);
    return sqrt(xU+yU); //Karekökünü toplayýp aldýk.
}

Nokta Nokta::topla(const Nokta& n)const{
  int x = this->x + n.x;
  int y = this->y + n.y;
  return Nokta(x,y);
}


void Nokta::ekranayaz()const{
	cout<<x<<"," <<y<<endl;
}

bool Nokta::baslangictaMi(){
	return x == 0 && y == 0;
}

#endif
