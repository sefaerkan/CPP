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
    //k++; pozfix
    //++k; //prefiks
    //k--; pozfix
    --k;  //prefiks
    k.print();
    
    
	return 0;
}
