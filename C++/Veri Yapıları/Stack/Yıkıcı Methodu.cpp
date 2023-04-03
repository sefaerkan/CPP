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
		~Stack(){ makeEmpty(); }
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
	StackNode* begin;
	StackNode* end;
	{
		Stack s;
		s.push(10);
		s.push(20);
		s.push(30);
		s.print();
		begin = s.begin();
		end= s.end();
		cout<<"Stack yasam dongusu bitti"<<endl;
	}

	while(begin != end) //Yýkýcý olmaz ise scope dýþýndan da ulaþýlýr
	{
		cout<<begin->data<<" ";
		begin = begin ->next;
	}

	
	
	
	
	return 0;
}
