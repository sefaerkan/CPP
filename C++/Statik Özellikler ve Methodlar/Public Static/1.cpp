#include<iostream>
using namespace std;
#include "Nokta.h"
int Nokta::i=0; //static ortak i


int main(int argc, char** argv) {
	Nokta n1(1,10,10);
	Nokta n2(n1);
	cout<<Nokta::i<<endl;
	{
	cout<<Nokta::i<<endl;	
	Nokta n3;
	cout<<Nokta::i<<endl;	
	}
	cout<<Nokta::i<<endl;
	
	
	return 0;
}
