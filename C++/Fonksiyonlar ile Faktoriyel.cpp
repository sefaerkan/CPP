#include <iostream>
using namespace std;

void factorial(int sayi){
	int faktoriyel =1;
	
	for(int i=1;i<=sayi;i++){
		faktoriyel *=i;
	}
	cout<<"Faktoriyel :"<<faktoriyel<<endl;
}

int main(int argc, char** argv) {
	int a;
	cout<<"Faktoriyelini Istediginiz Sayiyi Giriniz :";
	cin>>a;
	factorial(a);
	
	
	
	
	
	
	
	return 0;
}
