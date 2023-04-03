#include<iostream>
using namespace std;
#include "Nokta.h"



int main(int argc, char** argv) {
	Nokta n1(1,10,10);
	Nokta n2(n1);
	cout<<n1.z<<endl;
	cout<<n2.z<<endl;
	
	return 0;
}
