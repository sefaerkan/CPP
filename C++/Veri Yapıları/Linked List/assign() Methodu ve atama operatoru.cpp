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
	int lenght;
	Node* findPrev(Node* pos){ //Pozisyon verip öncesini bulma
		Node* tmp= root;
		Node* stop=end();
		while(tmp != stop && tmp->next != pos)
			tmp=tmp->next;	
		return tmp;
	}
	public:
		list(){
			lenght=0;
			root=new Node();
			tail=root;
			tail->next=new Node(); 
		}
		
		~list(){
			clear();
			delete tail->next;
			delete tail;
		}
		
		list& operator==(const list& rhs){ return assing(rhs); }
		
		list& assing(const list& rhs){
			clear();
			Node* tmp=rhs.begin();
			while(tmp != rhs.end()){
				push_back(tmp->data);
				tmp = tmp->next;
			}
			return *this;
		}
		Node* begin()const{return root->next;}
		Node* end()const{return NULL;}
		bool isEmpty()const{return tail->next;}
		int size()const{
			return lenght;	
		}
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
				Node* tmp= findPrev(pos);
				if(tmp == end())
					throw "Error: list::insert() for pos in not list";	
				tmp->next= new Node(value,tmp->next);	
			}
			lenght++;
		}
		
		void insert(Node* pos,int n, const int& value){
			for(int i=0;i<n;i++)
				insert(pos,value);
		}
		
		void insert(Node* pos,Node* first,Node* last){
			while(first != last)
				insert(pos,first->data);
				first=first->next;
		}
		
		void erase(Node* pos){
			if(isEmpty())
				throw "Error: list::erase() for list is empty";
			Node* prev=root;
			if(pos==end() || pos==tail)
			{
				pos=tail;
				prev= findPrev(pos);
				prev->next=pos->next;
				tail=prev;
			}else{
				prev=findPrev(pos);
				if(prev==end())
					throw "Error: list::insert() for pos in not list";
				prev->next=pos->next;	
			}
			delete pos;
			lenght--;
		}
		
		void erase(Node* first,Node* last){
			Node* tmp;
			while(first != last){
				tmp=first;
				first=first->next;
				erase(tmp);
			}
		}
		
		void clear(){
			erase(begin(),end());
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
		
		Node* find(const int &value)const{
			Node* tmp=begin();
			Node* stop=end();
			while(tmp != stop && tmp->data != value)
				tmp=tmp->next;
			return tmp;
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
