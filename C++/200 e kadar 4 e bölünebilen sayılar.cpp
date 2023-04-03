#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int toplam;
	int adet;
	int ortalama;
	for(int i=1;i<=200;i++)
	{
		if(i%4==0)
		{
		toplam +=i;
		adet +=1;
		cout<<i<<"\t";
		}
		}
	cout<<"\n";	
	ortalama = toplam / adet;
	cout<<"Toplam :"<<toplam;
	cout<<"\n";	
	cout<<"Adet :"<<adet;
	cout<<"\n";
	cout<<"Ortalama :"<<ortalama;	
		
	return 0;
}
