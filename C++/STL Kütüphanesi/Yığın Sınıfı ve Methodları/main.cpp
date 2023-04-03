//Stack(Y���n) S�n�f Son giren �lk ��kar (LIFO)
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

template <typename T>
void print(stack<T> s){
	while(! s.empty()){
	cout<<s.top()<<" ";
	s.pop();	
	}
	cout<<endl;
}
// 20 3 5 10 olarak
int main(){/*
	stack<int> s;
	cout<<s.empty()<<endl; //Bo� mu?
	s.push(10); //Eleman Ekledik
	s.push(5); //Eleman Ekledik
	s.push(3); //Eleman Ekledik
	s.push(20); //Eleman Ekledik
	cout<<s.empty()<<endl; //Bo� mu?
	cout<<s.top()<<endl; //Ba�taki eleman son giren ilk ��kar
	s.pop(); //Son gireni siler yani 20 silinir
	cout<<s.top()<<endl; //20 silindi�i i�in 3 en son giren olur
	
	cout<<"Size: "<<s.size()<<endl;
	print(s);
	stack<int> s1(s);
	print(s1);
	s1.pop(); //s1 den ��kard�k
	cout<<"S1 stack: ";
	print(s1);
	cout<<"S stack: ";
	print(s);
	*/
	string str= "kabak";
	stack<char> s; //Son giren ilk ��kar
	queue<char> q; //�lk giren ilk ��kar
	for(int i=0;i<str.length();i++){
		s.push(str[i]);
		q.push(str[i]);
	}
	bool palindromMu = true;
	while(! s.empty() and !q.empty()){
		if(s.top() != q.front())
		{	
			palindromMu	= false;
			break;
		}
		s.pop();
		q.pop();
	}
	if(palindromMu)
		cout<<str<< " Kelimesi palindromdur"<<endl;
	else
		cout<<str<< " Kelimesi palindrom degildir"<<endl;	
	
	
	
	return 0;
}
