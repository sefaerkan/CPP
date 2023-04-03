//Deque Sýnýfý
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

template <typename T>
void print(T& t){
	typename T::iterator iter = t.begin();
	while(iter != t.end())
		cout<< *iter++<<" ";
	cout<<endl;
} 



int main() {
	deque<int> d;//Kurucu method
	/*
	cout<<"Bos mu-> "<<d.empty()<<endl; //Boþ mu?
	d.push_back(2); //Sonuna eleman ekledik
	print(d); //Yazýrdýk
	d.push_back(3); //Sonuna eleman ekledik
	print(d); //Yazýrdýk
	d.push_front(4); //Baþýna eleman ekledik
	print(d); //Yazýrdýk
	cout<<"Bos mu-> "<<d.empty()<<endl; //Boþ mu?
	cout<<d.front()<<endl; //Baþýndaki eleman tek eleman olduðu için 2
	cout<<d.back()<<endl; //Sonundaki eleman tek eleman olduðu için 2
	cout<<"Elemanlar: ";
	print(d); //Yazýrdýk
	d.pop_back(); //Sondan cýkardýk
	cout<<"Elemanlar: ";
	print(d); //Yazýrdýk
	d.pop_front(); //Baþtan çýkardýk
	cout<<"Elemanlar: ";
	print(d); //Yazýrdýk
	d.push_front(1);
	cout<<"Elemanlar: ";
	print(d);
	d.clear(); //Temizleme
	cout<<"Bos mu-> "<<d.empty()<<endl; //Boþ mu?
	*/
	d.insert(d.begin(),5);
	print(d);
	d.insert(d.end(),9);
	print(d);
	vector<int> v;
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	cout<<"Vector: ";
	print(v);
	//d.insert(d.begin(),&v[1],&v[3]);//deque'nin baþýna vectorun 1 ve 2.indisini ekle
	//d.insert(d.end(),&v[1],&v[3]);//deque'nin sonuna vectorun 1 ve 2.indisini ekle
	d.insert(d.begin()+1,&v[1],&v[3]); //deque'nin baþýndan bir sonra vectorun 1 ve 2.indisini ekle
	print(d);
	//d.erase(d.begin()); //Baþtakini sil
	//d.erase(d.end()); //Sondakini sil
	//d.erase(d.begin()+2); //Baþtakinden iki sonrakini sil
	//d.erase(d.begin(),d.end()); //Baþtan sona sil 
	//d.erase(d.begin()+1,d.end()); //Baþtaki hariç sil
	//d.erase(d.begin()+1,d.end()-1); //Baþtaki ve sondaki hariç sil
	cout<<d.size()<<endl;
	//d.resize(2); //Boyutlandýrma yaptýk 2 yere düþtü 
	//d.resize(10); //Boyutlandýrma yaptýk 10 yer oldu
	d.resize(10,9); //Boyut 10 olana kadar 9 ekle
	print(d);
	
	deque<int> d2(d);
	print(d2);
	deque<int> d3(5,7); //5 elemanlý olsun elemanlar 7 olsun
	print(d3);
	deque<int> d4(&d[4],&d[7]);
	print(d4);
	
return 0;
}
