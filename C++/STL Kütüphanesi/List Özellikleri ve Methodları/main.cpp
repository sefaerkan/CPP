//List eklenecek eleman sayýsý belirli olmadýðý durumlarda uygundur.
#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print(T& t){
	typename T::iterator i = t.begin();
	while(i != t.end())
		cout<<*i++<<" ";
	cout<<endl;
}




int main() {
	list<int> l;
	list<int> l2(5,6);
	list<int> l3(10);
	list<int> l4(l3.begin(),l3.end()); //indis deðil direkt böyle
	list<int> l5(l2);
	/*
	print(l);
	print(l2);
	print(l3);
	print(l4);
	print(l5);
	*/
	//cout<<l.empty()<<endl; //Boþ mu ?
	//cout<<l2.front()<<endl; //Baþtaki eleman
	//cout<<l2.back()<<endl; //Sondaki eleman
	l2.clear(); //l2 yi temizledik
	//print(l2);
	l2.insert(l2.begin(),5); //l2 nin baþýna 5 ekledik
	l2.insert(l2.end(),3); //2 nin sonuna 3 ekledik
	l2.insert(l2.end(),9); //2 nin sonuna 9 ekledik
	print(l2);
	l2.push_back(10); //l2 nin sonuna daha kolay þekilde 10 ekledik
	print(l2);
	l2.push_front(1);
	print(l2); //l2 nin baþýna daha kolay þekilde 1 ekledik
	l2.pop_back(); //l2 nin sondan eleman cýkarma
	print(l2);
	l2.pop_front(); //l2 nin bastan eleman cýkarma
	print(l2);
	//l2.erase(l2.begin()); //Ýlk elemaný siliyoruz
	//l2.erase(l2.begin(),l2.end());//l2 yi baþtan sona sil dedik
	print(l2);
	cout<<l2.size()<<endl; //Kaç eleman var.
	l2.push_back(5);
	l2.push_back(7);
	l2.push_back(9);
	l2.push_back(7);
	print(l2);
	l2.remove(5); //Listedeki 5 leri sildi ne yazarsak listede olan o tüm deðerleri siler.
	print(l2);
	list<int> l6;
	l6.push_back(1);
	l6.push_back(9);
	l6.push_back(2);
	l6.push_back(6);
	print(l6);
	//l2.splice(l2.begin(),l6); //Listeleri birleþtirdik l6 yý l2nin baþýna . Yarým bardak su örneði
	//l2.splice(l2.end(),l6); //Listeleri birleþtirdik l6 yý l2nin sonuna
	/*l2.sort();
	l6.sort();
	print(l2);
	print(l6);
	l2.merge(l6); //Birleþtirdik
	print(l2);
	print(l6);
	*/
	cout<<endl;
	l2.sort();
	print(l2);
	l2.unique(); //Yanyana olanlarý karþýlaþtýrýp benzersiz yapýyor
	print(l2);
	
	return 0;
}
