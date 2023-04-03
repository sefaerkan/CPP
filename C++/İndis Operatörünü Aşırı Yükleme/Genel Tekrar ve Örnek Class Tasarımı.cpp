#include <iostream>
#include "Kolon.h"
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    Kolon k(5);
    for(int i=0; i<5;i++){
    	k.set(i, rand() % 50);
    }
    k.print();
    cout<<endl;
    for(int i=0; i<5;i++){
    	cout<< k[i] << " ";
    }
    
	/*
    k[1] = 12; 
	Birinci indise deðer atamak için const ifadeleri kaldýrýlýr.
    cout<<endl;
	k.print();
    */
    
	
	return 0;
}
