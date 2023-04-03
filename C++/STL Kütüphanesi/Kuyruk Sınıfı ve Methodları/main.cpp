//Queue(Kuyruk) ilk giren ilk ��kar mant���
#include <iostream>
#include <queue>
using namespace std;

template<typename T>
void print(queue<T> q){ //queue<T>& q b�yle yaparsak q silinir ikinci kez print olmaz
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();	
	}
	cout<<endl;
}
int main() {
	queue<int> q;
	cout<<q.empty()<<endl; //Dolu mu?
	q.push(5); //Eleman Ekledik
	q.push(1); //Eleman Ekledik
	q.push(3); //Eleman Ekledik
	cout<<q.empty()<<endl;
	cout<<q.front()<<endl;//Kuyru�un Ba��ndaki eleman
	cout<<q.back()<<endl;//Kuyru�un Sonundaki eleman
	q.pop(); //5 i ��kard� ilk giren ilk ��kar
	cout<<q.front()<<endl; //�lk eleman 1 oldu
	cout<<"Size: "<<q.size()<<endl; //Ka� eleman
	queue<int> q1 (q);
	cout<<q1.front()<<endl;
	cout<<"q1 size: "<<q1.size()<<endl;
	q1.pop(); //Kuyruklar birbirini ba�lam�yor
	cout<<"q1 size: "<<q1.size()<<endl;
	cout<<"q size: "<<q.size()<<endl; 
	print(q);
	print(q1);
	q.push(11);
	q.push(12);
	q.push(19);
	print(q);
	q.pop();
	print(q);
	
return 0;
}
