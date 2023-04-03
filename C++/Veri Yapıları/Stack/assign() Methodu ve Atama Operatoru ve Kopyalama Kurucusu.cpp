#include <iostream>
using namespace std;

class StackNode{
	public:
	int data;
	StackNode* next;
	StackNode(const int& data=0,StackNode* next=NULL): data(data),next(next){}
};

class Stack{
	StackNode* root;
	int lenght;
	void makeEmpty(){
		while(!isEmpty())
			pop();
			//root = NULL;	gereksiz
		}
	public:
		Stack():root(NULL),lenght(0){}
		Stack(const Stack& rhs): Stack(){ *this = rhs; } //Kopyalama Kurucusu
		~Stack(){ makeEmpty(); }
		StackNode* begin()const{ return root; }
		StackNode* end()const{ return NULL; }
		bool isEmpty()const{ return begin()==end(); }
		
		Stack& operator=(const Stack& rhs){ return assing(rhs);	}
		
		Stack& assing(const Stack& rhs){
			makeEmpty();
			lenght = rhs.lenght;
			if(!rhs.isEmpty()){
				StackNode* rhsTmp = rhs.begin()->next;
				root = new StackNode(rhs.top());
				StackNode* lhsTmp = begin();
				while(rhsTmp != rhs.end())
				{
					lhsTmp->next = new StackNode(rhsTmp->data);
					lhsTmp = lhsTmp->next;
					rhsTmp = rhsTmp->next;
				}
			}
			return *this;
		}
		
		void push(const int& value){
			StackNode* tmp=new StackNode(value,root);
			root=tmp;
			lenght++;
		}
		
		int top()const{
			if(isEmpty())
				throw "Error :Stack::top() for stack is empty";
			return begin()->data;
			//return root->data;	
		}
		
		void pop(){
			if(isEmpty())
				throw "Error :Stack::pop() for stack is empty";
			StackNode* tmp=root;
			root = tmp->next;
			delete tmp;
			lenght--;
		}
		
		int size()const{ return lenght; }
		
		void print()const{
			StackNode* tmp=begin();
			while(tmp != end()){
			cout<<tmp->data<<" ";
			tmp=tmp->next;
			}
		cout<<endl;	
		}
};


int main() {
	Stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.print();
	Stack s2 = s1;
	//s2 = s1;
	s2.print();
	cout<<"s1 begin: "<<s1.begin()<<endl;
	cout<<"s2 begin: "<<s2.begin()<<endl;
	s1.begin()->data=5;
	s1.print();
	s2.print();
	
	
	
	
	
	
	return 0;
}
