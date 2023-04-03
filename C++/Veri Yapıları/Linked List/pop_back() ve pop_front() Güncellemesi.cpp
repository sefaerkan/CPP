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
	Node* tail; //Son eleman
	public:
		list(){
			root=new Node();
			tail=root;
			tail->next=new Node(); 
		}
		Node* begin()const{return root->next;}
		Node* end()const{return NULL;}
		bool isEmpty()const{return tail->next;}
		void push_back(const int& value){
			insert(end(),value);
		}
		
		void push_front(const int& value){
			insert(begin(),value);
		}
		
		void insert(Node* pos, const int& value){
			if(pos == end()){
				tail->next= new Node(value,end());
				tail= tail->next;
			}else{
				Node* tmp= root;
				while(tmp->next != pos)
					tmp=tmp->next;
				tmp->next= new Node(value,tmp->next);	
			}
		}
		
		void erase(Node* pos){
			if(isEmpty())
				throw "Error: list::erase() for list is empty";
			Node* prev=root;
			if(pos==end() || pos==tail)
			{
				pos=tail;
				while(prev->next != pos)
					prev=prev->next;
				prev->next=pos->next;
				tail=prev;
			}else{
				while(prev->next != pos)
					prev= prev->next;
				prev->next=pos->next;	
			}
			delete pos;
		}
		
		
		int front()const{
			if(isEmpty())
				throw "Error: list::front() for list is empty";
			return begin()->data; 
		}
		
		int back(){
			if(isEmpty())
				throw "Error: list::back() for list is empty";
			return tail->data; 		
		}
		
		void pop_front(){ 
			try{ erase(begin()); }
			catch(const char ex){throw "Error: list::pop_front() for list is empty";}
		}
		
		void pop_back(){ 
			try{ erase(end()); }
			catch(const char ex){throw "Error: list::pop_back() for list is empty";} 
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





	
	
	return 0;
}
