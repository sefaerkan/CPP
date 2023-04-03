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
		
		void pop_front(){
			if(isEmpty())
				throw "Error: list::pop_front() for list is empty";
			//root= root->next; //Hatalý kullaným
			Node* tmp=root;
			root=tmp->next;
			delete tmp;			
		}
		
		void pop_back(){
			if(isEmpty())
				throw "Error: list::pop_back() for list is empty";
			if(begin()->next==end())
			{
				delete root;
				root=NULL;	
			}
			else{
				Node* tmp=begin();
				while(tmp->next->next != end())
					tmp= tmp->next;
				delete tmp->next;
				tmp->next=NULL;	
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
	l.push_back(10);
	l.push_front(5);
	l.push_back(55);
	l.print();
	l.pop_front();
	l.print();
	
	
	
	return 0;
}
