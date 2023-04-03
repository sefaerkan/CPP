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
		root = NULL;	
		}
	public:
		Stack():root(NULL),lenght(0){}
		StackNode* begin()const{ return root; }
		StackNode* end()const{ return NULL; }
		bool isEmpty()const{ return begin()==end(); }
		
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
	Stack s;
	cout<<s.isEmpty()<<endl;
	s.push(10);
	s.push(15);
	s.push(20);
	cout<<"Size: "<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
	s.print();
	s.makeEmpty();
	s.print();
	cout<<"Size: "<<s.size();
	
	
	return 0;
}
