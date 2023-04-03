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
	public:
		Stack():root(NULL){}
		StackNode* begin()const{ return root; }
		StackNode* end()const{ return NULL; }
		bool isEmpty()const{ return begin()==end(); }
		
		void push(const int& value){
			StackNode* tmp=new StackNode(value,root);
			root=tmp;
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
		}
		
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
	s.push(20);
	s.push(30);
	cout<<s.isEmpty()<<endl;
	s.print();
	s.pop();
	s.print();
	cout<<s.top();
	
	
	
	
	return 0;
}
