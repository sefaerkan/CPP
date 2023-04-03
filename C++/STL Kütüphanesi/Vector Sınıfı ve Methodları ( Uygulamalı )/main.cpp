#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T>& v){
	typename vector<T>::iterator i= v.begin(); //Genelleþtirilmiþ Pointer Ýterator
	while(i != v.end())
		cout<<*i++<<" ";
		cout<<endl;
}


int main(int argc, char** argv) {
	vector<int> v6;
	v6.insert(v6.begin(),5); //Baþa ekleme
	v6.insert(v6.end(),10); //Sona Ekleme
	v6.insert(v6.begin(),7); //Baþa ekleme
	v6.push_back(88); //Sona ekleme
	v6.pop_back(); //Sondan çýkarma
	print(v6);
	//cout<<v6.empty(); //vector boþ mu?
	cout<<*v6.begin() <<endl; //itertator olduðundan yýldýz koyup yazdýrma iþlemi yapmak lazým
	cout<<*v6.end() <<endl; //itertator olduðundan yýldýz koyup yazdýrma iþlemi yapmak lazým
	cout<<v6.front()<<endl; //yýldýz koymadan da baþtaki deðeri alabiliriz
	cout<<v6.back()<<endl; //yýldýz koymadan da sondaki deðeri alabiliriz
	
	//v6.erase(v6.begin(),v6.end()); //vectörü sildik baþtan sona
	//v6.erase(v6.begin() +1,v6.end()); //ilk eleman hariç sil
	//v6.erase(v6.begin() +1,v6.end()-1);  //ilk ve son eleman hariç sil
	//v6.clear(); //vectörün hepsini siler
	print(v6);
	cout<<v6.size()<<endl; //Vector kac elemanlý?
	cout<<v6.capacity()<<endl; //Vector kapasitesi?
	v6.push_back(12);
	v6.push_back(14);
	print(v6);
	cout<<v6.size()<<endl; //Vector kac elemanlý?
	cout<<v6.capacity()<<endl; //Vector kapasitesi?
	
	vector<int> v7;
	for(int i=0;i<10;i++){
		v7.push_back(i*2);
	}
	print(v7);
	
	v6.insert(v6.begin(),&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 nýn baþýna  
	print(v6);
	v6.insert(v6.end(),&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 nýn sonuna
	//v6.insert(v6.end()-1,&v7[2],&v7[5]); //v7'nin 3,4,5 indexlerini v6 nýn sonundan bir öncesine 
	print(v6);
	vector<int> v8(&v7[3],&v7[8]); //yeni vector v7 nin 3 indexten 8.indexe kadar elemalarý aldýk
	print(v8);
	cout<<endl;
	v7.swap(v8); //Takas iþlemi
	print(v7);
	cout<<endl;
	print(v8);
	
	
	return 0;
}
