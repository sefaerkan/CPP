#include <iostream>
#include <bitset>
#include <exception>
using namespace std;


int main() {
	bitset<4> bits(0);
	cout<<bits<<endl;
	cout<<"All 1: "<<bits.all()<<endl; //Hepsi 1 mi?
	cout<<"All 0: "<<bits.none()<<endl; //Hepsi 0 mi?
	cout<<"Count: "<<bits.count()<<endl; //Ka� tane 1 var?
	cout<<"Size: "<<bits.size()<<endl;
	cout<<"Any 1: "<<bits.any()<<endl; //Hi� 1 var m�?
	cout<<bits.set(2)<<endl; //2.bit de�erini 1 yapt�k
	//cout<<bits.set()<<endl; //Hepsi 1 yap�l�r
	cout<<bits.reset(2)<<endl; //2.bit de�erini 0 yapt�k
	cout<<bits.set(3)<<endl;
	cout<<"Flip: "<<bits.flip()<<endl; //Tamemen ters �evirir
	cout<<"3.index: "<<bits[3]<<endl; //3.pozisyon degeri-G�venli de�il
	try{
	cout<<bits.test(4)<<endl; //Ta�ma var m�?
	}
	catch(const exception& ex){
		cout<<ex.what()<<endl;
	}
	cout<<bits.to_ulong()<<endl; //Say�ya �evirdik
	string result = bits.to_string(); //Stringe �evirdik
	cout<<result<<endl;
	
	
	return 0;
}
