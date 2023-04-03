//Deque S�n�f�
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
	cout<<"Bos mu-> "<<d.empty()<<endl; //Bo� mu?
	d.push_back(2); //Sonuna eleman ekledik
	print(d); //Yaz�rd�k
	d.push_back(3); //Sonuna eleman ekledik
	print(d); //Yaz�rd�k
	d.push_front(4); //Ba��na eleman ekledik
	print(d); //Yaz�rd�k
	cout<<"Bos mu-> "<<d.empty()<<endl; //Bo� mu?
	cout<<d.front()<<endl; //Ba��ndaki eleman tek eleman oldu�u i�in 2
	cout<<d.back()<<endl; //Sonundaki eleman tek eleman oldu�u i�in 2
	cout<<"Elemanlar: ";
	print(d); //Yaz�rd�k
	d.pop_back(); //Sondan c�kard�k
	cout<<"Elemanlar: ";
	print(d); //Yaz�rd�k
	d.pop_front(); //Ba�tan ��kard�k
	cout<<"Elemanlar: ";
	print(d); //Yaz�rd�k
	d.push_front(1);
	cout<<"Elemanlar: ";
	print(d);
	d.clear(); //Temizleme
	cout<<"Bos mu-> "<<d.empty()<<endl; //Bo� mu?
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
	//d.insert(d.begin(),&v[1],&v[3]);//deque'nin ba��na vectorun 1 ve 2.indisini ekle
	//d.insert(d.end(),&v[1],&v[3]);//deque'nin sonuna vectorun 1 ve 2.indisini ekle
	d.insert(d.begin()+1,&v[1],&v[3]); //deque'nin ba��ndan bir sonra vectorun 1 ve 2.indisini ekle
	print(d);
	//d.erase(d.begin()); //Ba�takini sil
	//d.erase(d.end()); //Sondakini sil
	//d.erase(d.begin()+2); //Ba�takinden iki sonrakini sil
	//d.erase(d.begin(),d.end()); //Ba�tan sona sil 
	//d.erase(d.begin()+1,d.end()); //Ba�taki hari� sil
	//d.erase(d.begin()+1,d.end()-1); //Ba�taki ve sondaki hari� sil
	cout<<d.size()<<endl;
	//d.resize(2); //Boyutland�rma yapt�k 2 yere d��t� 
	//d.resize(10); //Boyutland�rma yapt�k 10 yer oldu
	d.resize(10,9); //Boyut 10 olana kadar 9 ekle
	print(d);
	
	deque<int> d2(d);
	print(d2);
	deque<int> d3(5,7); //5 elemanl� olsun elemanlar 7 olsun
	print(d3);
	deque<int> d4(&d[4],&d[7]);
	print(d4);
	
return 0;
}
