//çoklu Küme Sýnýfý: Kümeden farký bir eleman birden fazla sayýda bulunabilir
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
	cout<<m.empty()<<endl; //Boþ mu
	m.insert(3); //Eleman Ekledik
	m.insert(1); //Eleman Ekledik
	m.insert(3); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik
	m.insert(7); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik
	m.insert(6); //Eleman Ekledik			
	cout<<m.empty()<<endl; //Boþ mu
	print(m);
	cout<<m.count(6)<<endl; //6 kaç defa var
	
	multiset<int>::iterator up,low;
	low= m.lower_bound(6); //Alt sýnýrý 6 yaptýk
	up = m.upper_bound(6); //Üst sýnýrý 6 yaptýk
	if(low != m.end())
		cout<<"Eleman var "<<endl;
	else
		cout<<"Eleman yok "<<endl;	
	if(up != m.end())
		cout<<"Eleman var "<<endl;
	else
		cout<<"Eleman yok "<<endl;
	//m.erase(low,up); //Tüm altýlarý silmek için alt ve üst sýnýrý sildik
	//print(m);
	
	//Aralýk arama iþlemi
	pair<multiset<int>::iterator,multiset<int>::iterator> range = m.equal_range(6); //Uzun
	print(m);
	m.erase(range.first,range.second); //Aralýðý sil
	print(m);

return 0;
}
