#include <iostream>
using namespace std;

void Test(){
	static int i=3; //Static i tanýmladýk ve bu deðer silinmiyor hafýzada kalýyor
	i++;
	cout<<"i'nin degeri: "<<i<<endl;
}

int main(int argc, char** argv) {
	Test(); //Her bir fonksiyon çaðýrýldýðýnda ise deðer kaldýðý yerden devam ediyor.
	Test();
	Test();
	Test();
	return 0;
}
