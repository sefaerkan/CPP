#include<iostream>
using namespace std;
#include "Nokta.h"



int main(int argc, char** argv) {
	Nokta n1(0,0);
	Nokta n2(3,4);
	cout<<"Noktalar Arasi Uzaklik: "<<n1.uzaklikHesapla(n2)<<endl;
	
	return 0;
}
