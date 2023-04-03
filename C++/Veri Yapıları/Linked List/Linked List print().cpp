#include <iostream>
using namespace std;

class Node{
	public:
		Node(const int& data= 0,Node* next =NULL) : data(data),next(next){ }
		int data;
		Node* next;
};

class list{
	Node* root;
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
	l.push_back(5);
	cout<<l.isEmpty()<<endl;
	l.push_back(10);
	l.push_back(3);
	l.print();
	l.push_back(55);
	l.print();
	
	
	
	return 0;
}
