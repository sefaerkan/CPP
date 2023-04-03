#include <iostream>
#include "Kolon.h"
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    Kolon k(5);
    for(int i=0; i<5;i++){
    	k[i] = rand() % 50;
    }
    k.print();
    cout<<endl<<endl;
    k(2,3); //2 ile  3.indis yer deðiþtirdi.
    k.print();
    
    
	
    
	
	return 0;
}
