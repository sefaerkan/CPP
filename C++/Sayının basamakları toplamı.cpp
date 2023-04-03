#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n;
	int toplam=0;
	
	cout<<"Bir sayi giriniz :";
	cin>>n;
	
	do{
	toplam += (n%10);
	n = n/10;
	}
	while(n>0);
	
	cout<<"Basamaklarin toplami :"<<toplam;
	
	
	
	
	return 0;
}
