//Rekürsif(Özyinelemeli) Programlama: Kendi gövdesi içerisinde yine kendisine çaðrý yapan fonksiyonlardýr.
#include <iostream>
using namespace std;

int faktoriyel(int n){
	if(n == 0)
		return 1;
	else
		return n * faktoriyel(n-1);	
}

int toplam(int n){
	if(n==1)
		return 1;
	else
		return n + toplam(n-1);
}

void binary(int n,int taban){
	if(n>taban-1)
		binary(n / taban,taban);
	cout<<n % taban;	
}

template<class T>
class Node{
	public:
		T data;
		Node<T>*next;
		Node(const T&data = T(),Node<T>* next=NULL): data(data),next(next){ }
};

Node<int>* root = NULL;

template<class T>
void print(Node<T>* begin){
	if(begin){
		cout<<begin->data<<endl;
		print(begin->next);
	}
}

template<class T>
Node<T>* addLast(const T& data,Node<T>* begin){
	if(begin){
		begin->next= addLast(data,begin->next);
	}
	else
		return new Node<T>(data);
}

int main() {
	root = new Node<int>(5);
	root->next=new Node<int>(10);
	addLast(11,root);
	print(root);
	
	/*
	cout<<faktoriyel(5)<<endl;
	cout<<toplam(5)<<endl;
	binary(9,3);
	*/
	return 0;
}
