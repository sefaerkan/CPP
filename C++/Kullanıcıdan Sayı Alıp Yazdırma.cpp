#include <iostream>

using namespace std;

int main(){
	int sayi , gecici , sonuc=0, basdeg;
	cout << "Bir Sayi Giriniz :";
	cin >> sayi;
	
	gecici = sayi;
	
	while(sayi>0){
		
		basdeg = gecici%10;
		sonuc+=basdeg*basdeg*basdeg;
		gecici/=10;
		
	}
	if(sayi==sonuc){
		cout << "Sayi Armstrong";
	}
	else
	cout << "Sayi Armstrong değil";
	
	
	return 0;
	
	
	
}

