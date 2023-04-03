#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string array[4];
	cout<<"Degerleri Girin:"<<endl;
	
	for(int i=0;i<4;i++)
	{
		cin>>array[i];
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<i<<". index degeri :"<<array[i]<<endl;
	}

	return 0;
}
