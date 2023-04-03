#include <iostream>
#include <bitset>
#include <exception>
using namespace std;


int main() {
	bitset<4> bits(0);
	cout<<bits<<endl;
	cout<<"All 1: "<<bits.all()<<endl; //Hepsi 1 mi?
	cout<<"All 0: "<<bits.none()<<endl; //Hepsi 0 mi?
	cout<<"Count: "<<bits.count()<<endl; //Kaç tane 1 var?
	cout<<"Size: "<<bits.size()<<endl;
	cout<<"Any 1: "<<bits.any()<<endl; //Hiç 1 var mý?
	cout<<bits.set(2)<<endl; //2.bit deðerini 1 yaptýk
	//cout<<bits.set()<<endl; //Hepsi 1 yapýlýr
	cout<<bits.reset(2)<<endl; //2.bit deðerini 0 yaptýk
	cout<<bits.set(3)<<endl;
	cout<<"Flip: "<<bits.flip()<<endl; //Tamemen ters çevirir
	cout<<"3.index: "<<bits[3]<<endl; //3.pozisyon degeri-Güvenli deðil
	try{
	cout<<bits.test(4)<<endl; //Taþma var mý?
	}
	catch(const exception& ex){
		cout<<ex.what()<<endl;
	}
	cout<<bits.to_ulong()<<endl; //Sayýya çevirdik
	string result = bits.to_string(); //Stringe çevirdik
	cout<<result<<endl;
	
	
	return 0;
}
