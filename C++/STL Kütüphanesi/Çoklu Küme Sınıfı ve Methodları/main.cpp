//�oklu K�me S�n�f�: K�meden fark� bir eleman birden fazla say�da bulunabilir
#include <iostream>
#include <set>
using namespace std;

template <typename T>
void print(T& t){
	typename T::iterator iter = t.begin();
	while(iter != t.end())
		cout<< *iter++<<" ";
	cout<<endl;
}

int main(){
	multiset<int> m;
	cout<<m.empty()<<endl; //Bo� mu
	m.insert(3); //Eleman Ekledik
	m.insert(1); //Eleman Ekledik
	m.insert(3); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik
	m.insert(7); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik			
	cout<<m.empty()<<endl; //Bo� mu
	print(m);
	cout<<m.count(6)<<endl; //6 ka� defa var
	
	multiset<int>::iterator up,low;
	low= m.lower_bound(6); //Alt s�n�r� 6 yapt�k
	up = m.upper_bound(6); //�st s�n�r� 6 yapt�k
	if(low != m.end())
		cout<<"Eleman var "<<endl;
	else
		cout<<"Eleman yok "<<endl;	
	if(up != m.end())
		cout<<"Eleman var "<<endl;
	else
		cout<<"Eleman yok "<<endl;
	//m.erase(low,up); //T�m alt�lar� silmek i�in alt ve �st s�n�r� sildik
	//print(m);
	
	//Aral�k arama i�lemi
	pair<multiset<int>::iterator,multiset<int>::iterator> range = m.equal_range(6); //Uzun
	print(m);
	m.erase(range.first,range.second); //Aral��� sil
	print(m);

return 0;
}
