#include <iostream>
#include "Kolon.h"
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    Kolon k(5);
    Kolon k3(5);
    for(int i=0;i<5;i++){
    	k.set(i,rand() % 50);
    	k3.set(i,rand() % 50);
	}
	k.print();
	cout<<endl;
	k3.print();
	cout<<endl;
	Kolon k2=k3; //Kopyalama kurucusu
	k2.print();
	cout<<endl;
	k2 = k; //Atama operatörü
	k2.print();
	
	return 0;
}
