#include<iostream>
using namespace std;
#include "Nokta.h"
int Nokta::i=0; //Private cout ile kullanamayýz.


int main(int argc, char** argv) {
	Nokta n1(1,10,10);
	Nokta n2(n1);
	cout<<n1.getI()<<endl;
	cout<<n2.getI()<<endl;
	{
	cout<<n1.getI()<<endl;
	cout<<n2.getI()<<endl;
	n2.setI(500);
	Nokta n3;
	cout<<n1.getI()<<endl;
	cout<<n2.getI()<<endl;
	} //burdan sonra n3 ölüyor ve i bir eksiliyor.
	cout<<n1.getI()<<endl;
	cout<<n2.getI()<<endl;
	
	
	return 0;
}
