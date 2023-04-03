#include <iostream>
using namespace std;

class Gamer{
	public:
		
		static int gamers;
	    Gamer(){
	    	gamers++;
	    	cout<<"Yeni oyuncu olusturuldu."<<endl;
		}
	
	
};
int Gamer::gamers=0;

int main(int argc, char** argv) {
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	
	cout<<Gamer::gamers<<endl;
	
	
	return 0;
}
