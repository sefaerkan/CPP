/* Priority Queue(Öncelikli Kuyruk):Eklemeler: Öncelik karþýlaþtýrma operatorüne göre 
yapýlýr. Varsayýlan olarak operator< dür.Hastane mantýðý bazý hastalara öncelik verilir*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>
#include <queue>
using namespace std;

template <typename T>
void print(T t){
	while(!t.empty()){
		cout<< t.top()<<" ";
		t.pop();
	}
	cout<<endl;
}
template <typename T>
bool cmp(T x,T y){
	return x > y; //Küçüktür yerine büyüktür kullanýyoruz
}
int main(){
	priority_queue<int> p;
	cout<<"Bos mu? "<<p.empty()<<endl; //Boþ mu?
	p.push(5); //Eleman Ekledik
	print(p);
	p.push(3);
	print(p);
	p.push(11);
	print(p);
	p.push(7);
	print(p);
	p.push(4);
	print(p);
	cout<<"Bos mu? "<<p.empty()<<endl; //Boþ mu?
	cout<<"Ilk Eleman: "<<p.top()<<endl; //En baþtaki eleman karþýlaþtýrma yaparak yazdýrýr
	
	priority_queue<int,vector<int>,bool(*)(int,int)> p1(cmp);
	cout<<"P1 container icerigi:"<<endl;
	p1.push(5);
	print(p1);
	p1.push(3);
	print(p1);
	p1.push(11);
	print(p1);
	p1.push(7);
	print(p1);
	p1.push(4);
	print(p1);
	
	vector<int> v;
	int rast;
	for(int i=0;i<10;i++){
		rast = rand() % 100;
		cout<<rast<<" ";
		v.push_back(rast);
	}
	priority_queue<int> p3(v.begin(),v.end());
		cout<<endl;
		cout<<"Oncelikli kuyruk ile:"<<endl;
		print(p3);	
	
	
	return 0;
}
