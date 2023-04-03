#include <iostream>

using namespace std;


int main() 
{
	int harfNotu;
	
	cout<<"Not Giriniz 1-5 arasi: \n";
	cin>>harfNotu;
	
	switch(harfNotu)
	{
		case 5:
			{
				cout<<"Notunuz Pekiyi";
				break;
			}
		case 4:
			{
				cout<<"Notunuz Iyi";
				break;
			}
		case 3:
		    {
		    	cout<<"Notunuz Orta";
		    	break;
			}
		case 2:
		    {
		    	cout<<"Notunuz Gecer";
		    	break;
			}
		case 1:
		    {
		    	cout<<"Notunuz Kaldiniz";
		    	break;
		    }			
	}
	
	
	
	
	return 0;
}
