#include <iostream>
using namespace std;

void Test(){
	static int i=3; //Static i tan�mlad�k ve bu de�er silinmiyor haf�zada kal�yor
	i++;
	cout<<"i'nin degeri: "<<i<<endl;
}

int main(int argc, char** argv) {
	Test(); //Her bir fonksiyon �a��r�ld���nda ise de�er kald��� yerden devam ediyor.
	Test();
	Test();
	Test();
	return 0;
}
