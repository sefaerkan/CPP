#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T>& v){
	typename vector<T>::iterator i= v.begin(); //Genelle�tirilmi� Pointer �terator
	while(i != v.end())
		cout<<*i++<<" ";
		cout<<endl;
}


int main(int argc, char** argv) {
	vector<int> v6;
	v6.insert(v6.begin(),5); //Ba�a ekleme
	v6.insert(v6.end(),10); //Sona Ekleme
	v6.insert(v6.begin(),7); //Ba�a ekleme
	v6.push_back(88); //Sona ekleme
	v6.pop_back(); //Sondan ��karma
	print(v6);
	//cout<<v6.empty(); //vector bo� mu?
	cout<<*v6.begin() <<endl; //itertator oldu�undan y�ld�z koyup yazd�rma i�lemi yapmak laz�m
	cout<<*v6.end() <<endl; //itertator oldu�undan y�ld�z koyup yazd�rma i�lemi yapmak laz�m
	cout<<v6.front()<<endl; //y�ld�z koymadan da ba�taki de�eri alabiliriz
	cout<<v6.back()<<endl; //y�ld�z koymadan da sondaki de�eri alabiliriz
	
	//v6.erase(v6.begin(),v6.end()); //vect�r� sildik ba�tan sona
	//v6.erase(v6.begin() +1,v6.end()); //ilk eleman hari� sil
	//v6.erase(v6.begin() +1,v6.end()-1);  //ilk ve son eleman hari� sil
	//v6.clear(); //vect�r�n hepsini siler
	print(v6);
	cout<<v6.size()<<endl; //Vector kac elemanl�?
	cout<<v6.capacity()<<endl; //Vector kapasitesi?
	v6.push_back(12);
	v6.push_back(14);
	print(v6);
	cout<<v6.size()<<endl; //Vector kac elemanl�?
	cout<<v6.capacity()<<endl; //Vector kapasitesi?
	
	vector<int> v7;
	for(int i=0;i<10;i++){
		v7.push_back(i*2);
	}
	print(v7);
	
	v6.insert(v6.begin(),&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 n�n ba��na  
	print(v6);
	v6.insert(v6.end(),&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 n�n sonuna
	//v6.insert(v6.end()-1,&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 n�n sonundan bir �ncesine 
	print(v6);
	vector<int> v8(&v7[3],&v7[8]); //yeni vector v7 nin 3 indexten 8.indexe kadar elemalar� ald�k
	print(v8);
	cout<<endl;
	v7.swap(v8); //Takas i�lemi
	print(v7);
	cout<<endl;
	print(v8);
	
	
	return 0;
}
