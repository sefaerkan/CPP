#include <iostream>
#include <map>
using namespace std;

template <typename T>
void print(T& t,string sep="\n"){
	typename T::iterator iter = t.begin();
	while(iter != t.end()){
		cout<<iter->first<<" "<<iter->second<<sep;
		iter++;
	}
	cout<<endl;
}
template <typename T> //Kar��la�t�rma Operat�r� ==greater
bool cmp(T x,T y){
	return x>y;
}

int main(int argc, char** argv) {
	multimap<string,int,greater<string> > m;
	cout<<m.empty()<<endl; //Bo� mu ?
	pair<string,int> deger("bir",1); //�ift tan�mlad�k
	m.insert(deger); //Multimap'e ekledik
	m.insert(pair<string,int>("iki",2)); //Multimap'e ekledik
	m.insert(pair<string,int>("iki",2));//Multimap'e ekledik map'e ayn�s�n� ekleme yok
	m.insert(pair<string,int>("dort",4));
	m.insert(pair<string,int>("uc",3));
	m.insert(pair<string,int>("bes",5));
	m.insert(pair<string,int>("dort",4));
	m.insert(pair<string,int>("dort",4));
	m.insert(pair<string,int>("yedi",7));
	cout<<m.empty()<<endl; //Bo� mu ?
	print(m);
	multimap<string,int>::iterator a,b,c,d;
	a= m.lower_bound("dort");
	b=m.upper_bound("dort");
	//m.erase(a,b); //T�m d�rtleri sildik
	//pair<multimap<string,int>::iterator,multimap<string,int>::iterator> aralik=m.equal_range("dort");//4 leri bulduk
	//pair<decltype(a),decltype(a)> aralik=m.equal_range("dort"); //Olmuyor ama kals�n
	//m.erase(aralik.first,aralik.second);
	
	print(m);	
	
	
	
	
	
	return 0;
}
