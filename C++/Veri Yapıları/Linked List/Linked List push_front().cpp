#include <iostream>
using namespace std;

class Node{
	public:
		Node(const int& data= 0,Node* next =NULL) : data(data),next(next){ }
		int data;
		Node* next; //Ýþaretçi
};

class list{
	Node* root; //Liste kökü
	public:
		list() : root(NULL){ }
		Node* begin()const{return root;}
		Node* end()const{return NULL;}
		bool isEmpty()const{return root==NULL;}
		void push_back(const int& value){
			if(isEmpty())
				root = new Node(value);
			else{
				Node* tmp= begin();
				while(tmp->next != end()){
					tmp = tmp->next;
				}	
				tmp->next= new Node(value);	
			}
		}
		
		void push_front(const int& value){
			Node* tmp= new Node(value);
			tmp->next=root;
			root=tmp;
		}
		
		void print(){
			Node* tmp= begin();
			while(tmp != end()){
				cout<<tmp->data<<" ";
				tmp= tmp->next;
			}
			cout<<endl;
		}
};
int main() {
	list l;
	cout<<l.isEmpty()<<endl;
	l.push_front(3);
	l.print();
	l.push_front(10);
	l.print();
	l.push_front(15);
	l.print();
	l.push_back(20);
	l.print();
	
	
	
	return 0;
}
