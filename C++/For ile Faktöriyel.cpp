#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int sayi;
cout<<"Faktoriyeli Alinacak Sayi:";
cin>>sayi;
int faktoriyel =1;

for(int i=1;i<=sayi;i++){
	
	faktoriyel *= i;
	}
	
	cout<<"Faktoriyel :"<<faktoriyel<<endl;
	
	return 0;
}
