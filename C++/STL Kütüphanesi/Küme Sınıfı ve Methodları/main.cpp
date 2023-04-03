/*
Küme Sýnýfý: Bir eleman küme içerisinde bir kez olacak þekilde saðlanýr. Bunu saðlamak
için eklemede öncelik karþýlaþtýrma opertorü kulllanýlýr. operator<'dür. 
*/
#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void print(T& t){
	typename T::iterator iter = t.begin();
	while(iter != t.end())
		cout<< *iter++<<" ";
	cout<<endl;	
}
template <typename T>
bool cmp(T x,T y){
	return x>y;
}

int main(){
	set<int> s;//Kurucu method
	cout<<s.empty()<<endl; //Boþ mu?
	s.insert(5); //Ýnsert ile ekleme yapýyoruz
	s.insert(5); //2 kere 5 ekledik ama bir tane görünüyor
	s.insert(4); //Ýnsert ile ekleme yapýyoruz
	cout<<s.empty()<<endl; //Boþ mu?
	print(s); //Küçükten büyüðe bir sýralama olacaktýr
	
	set<int>::iterator it=s.begin(); //Ýteratorun içinin boþ olmadýðýndan emin olduk
	it=s.insert(it,10);
	print(s);
	
	int dizi[]={1,2,6,4,8,9};
	s.insert(dizi,dizi+6); //Diziden eleman ekledik
	print(s);
	
	vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(7);
	s.insert(v.begin(),v.end()); //Vectorden ekleme yaptýk
	print(s);
	
	set<int>::iterator begin=s.begin(); //Baþlangýç deðerini verdik
	cout<< *begin<<endl;
	set<int>::iterator end=s.end(); //Sonuncu deðerini verdik
	cout<< *end<<endl;
	
	s.erase(it);//10 elemanýný eklemiþtik onu sildik
	print(s);
	//s.erase(s.begin(),s.end()); //Kümeyi kople sildik
	//s.clear(); //Kümeyi kople temizledik
	s.insert(11);
	print(s);
	cout<<"Eleman Sayisi: "<<s.size()<<endl; //Kaç eleman var
	//cout<<s.count(5)<<endl; //5 kaç defa var
	//cout<<s.count(12)<<endl; //12 kaç defa var
	set<int>::iterator alti =s.find(6); //Arama
	if(alti !=s.end())
		cout<<"Eleman var"<<endl;
	else
		cout<<"Eleman yok"<<endl;	
	cout<< *alti<<endl;
	s.erase(alti);
	print(s);
	/*
	s.lower_bound(); // Alt sýnýr	
	s.upper_bound(); // Üst sýnýr
	*/
	set<int>::iterator uc =s.lower_bound(3); //Alt sýnýr 3
	set<int>::iterator dokuz =s.upper_bound(9); //üst sýnýr 9
	s.erase(uc,dokuz); //Üçten dokuza kadar sil
	print(s);
	cout<<s.size()<<endl;
	
	set<int> s2(s);
	print(s2);
	set<int> s3(dizi,dizi+5); //Diziden 5 eleman ekle
	print(s3);
	
	set<int,greater<int> > s4; //Büyükten kücüðe yaptýk > , less<T>
	s4.insert(3);
	s4.insert(2);
	s4.insert(11);
	print(s4);
	
	set<int,bool(*)(int,int)> s5(cmp); //Kendi karþýlaþtýrma operatorumüzü kullandýk
	s5.insert(3);
	s5.insert(2);
	s5.insert(11);
	print(s5);
	
return 0;
}
