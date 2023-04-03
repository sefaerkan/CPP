/*
K�me S�n�f�: Bir eleman k�me i�erisinde bir kez olacak �ekilde sa�lan�r. Bunu sa�lamak
i�in eklemede �ncelik kar��la�t�rma opertor� kulllan�l�r. operator<'d�r. 
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
	cout<<s.empty()<<endl; //Bo� mu?
	s.insert(5); //�nsert ile ekleme yap�yoruz
	s.insert(5); //2 kere 5 ekledik ama bir tane g�r�n�yor
	s.insert(4); //�nsert ile ekleme yap�yoruz
	cout<<s.empty()<<endl; //Bo� mu?
	print(s); //K���kten b�y��e bir s�ralama olacakt�r
	
	set<int>::iterator it=s.begin(); //�teratorun i�inin bo� olmad���ndan emin olduk
	it=s.insert(it,10);
	print(s);
	
	int dizi[]={1,2,6,4,8,9};
	s.insert(dizi,dizi+6); //Diziden eleman ekledik
	print(s);
	
	vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(7);
	s.insert(v.begin(),v.end()); //Vectorden ekleme yapt�k
	print(s);
	
	set<int>::iterator begin=s.begin(); //Ba�lang�� de�erini verdik
	cout<< *begin<<endl;
	set<int>::iterator end=s.end(); //Sonuncu de�erini verdik
	cout<< *end<<endl;
	
	s.erase(it);//10 eleman�n� eklemi�tik onu sildik
	print(s);
	//s.erase(s.begin(),s.end()); //K�meyi kople sildik
	//s.clear(); //K�meyi kople temizledik
	s.insert(11);
	print(s);
	cout<<"Eleman Sayisi: "<<s.size()<<endl; //Ka� eleman var
	//cout<<s.count(5)<<endl; //5 ka� defa var
	//cout<<s.count(12)<<endl; //12 ka� defa var
	set<int>::iterator alti =s.find(6); //Arama
	if(alti !=s.end())
		cout<<"Eleman var"<<endl;
	else
		cout<<"Eleman yok"<<endl;	
	cout<< *alti<<endl;
	s.erase(alti);
	print(s);
	/*
	s.lower_bound(); // Alt s�n�r	
	s.upper_bound(); // �st s�n�r
	*/
	set<int>::iterator uc =s.lower_bound(3); //Alt s�n�r 3
	set<int>::iterator dokuz =s.upper_bound(9); //�st s�n�r 9
	s.erase(uc,dokuz); //��ten dokuza kadar sil
	print(s);
	cout<<s.size()<<endl;
	
	set<int> s2(s);
	print(s2);
	set<int> s3(dizi,dizi+5); //Diziden 5 eleman ekle
	print(s3);
	
	set<int,greater<int> > s4; //B�y�kten k�c��e yapt�k > , less<T>
	s4.insert(3);
	s4.insert(2);
	s4.insert(11);
	print(s4);
	
	set<int,bool(*)(int,int)> s5(cmp); //Kendi kar��la�t�rma operatorum�z� kulland�k
	s5.insert(3);
	s5.insert(2);
	s5.insert(11);
	print(s5);
	
return 0;
}
