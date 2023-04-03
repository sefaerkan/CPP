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
		
		int front()const{
			if(isEmpty())
				throw "Error: list::front() for list is empty";
			return begin()->data; 
		}
		
		int back(){
			if(isEmpty())
				throw "Error: list::back() for list is empty";
			Node* tmp= begin();
			while(tmp->next != end()) //Baþtaki deðer sona gidene kadar
				tmp = tmp->next; //Baþtakini sýradaki yap
			return tmp->data; //Sonun deðerini döndür		
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
	l.push_back(10);
	l.push_back(15);
	l.push_back(20);
	l.push_back(25);
	l.push_front(5);
	l.print();
	cout<<"front: "<<l.front()<<endl;
	cout<<"back: "<<l.back()<<endl;
	
	
	
	return 0;
}
