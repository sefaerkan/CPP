#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
string sys_username ="sefa_erkan";
string sys_password ="123456";

string username;
string password;

while(true){ //Sonsuz olarak çalýþsýn.

cout<<"Kullanici Adi :";
cin>>username;
cout<<"Parola :";
cin>>password;

if(username==sys_username && password==sys_password)
{
	cout<<"Hosgeldiniz Sayin. "<<username<<endl;
	break;
}
if(username!=sys_username && password==sys_password)
{
	cout<<"Kullanici Adi Hatali"<<endl;
}
if(username==sys_username && password!=sys_password)
{
	cout<<"Parola Hatali."<<endl;
}	
else
{
cout<<"Kullanici Adi ve Parola Hatali"<<endl;	
}	
}	
	
	
	return 0;
}
