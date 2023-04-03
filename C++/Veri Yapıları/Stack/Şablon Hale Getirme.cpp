#include <iostream>
using namespace std;

template <class T>
class StackNode{
	public:
	T data;
	StackNode<T>* next;
	StackNode(const T& data=T(),StackNode<T>* next=NULL): data(data),next(next){}
};

template <class T>
class Stack{
	StackNode<T>* root;
	int lenght;
	void makeEmpty(){
		while(!isEmpty())
			pop();
			//root = NULL;	gereksiz
		}
	public:
		Stack():root(NULL),lenght(0){}
		Stack(const Stack<T>& rhs): Stack(){ *this = rhs; } //Kopyalama Kurucusu
		~Stack(){ makeEmpty(); }
		StackNode<T>* begin()const{ return root; }
		StackNode<T>* end()const{ return NULL; }
		bool isEmpty()const{ return begin()==end(); }
		
		Stack<T>& operator=(const Stack<T>& rhs){ return assing(rhs);	}
		
		Stack<T>& assing(const Stack<T>& rhs){
			makeEmpty();
			lenght = rhs.lenght;
			if(!rhs.isEmpty()){
				StackNode<T>* rhsTmp = rhs.begin()->next;
				root = new StackNode<T>(rhs.top());
				StackNode<T>* lhsTmp = begin();
				while(rhsTmp != rhs.end())
				{
					lhsTmp->next = new StackNode<T>(rhsTmp->data);
					lhsTmp = lhsTmp->next;
					rhsTmp = rhsTmp->next;
				}
			}
			return *this;
		}
		
		void push(const T& value){
			StackNode<T>* tmp=new StackNode<T>(value,root);
			root=tmp;
			lenght++;
		}
		
		T top()const{
			if(isEmpty())
				throw "Error :Stack::top() for stack is empty";
			return begin()->data;
			//return root->data;	
		}
		
		void pop(){
			if(isEmpty())
				throw "Error :Stack::pop() for stack is empty";
			StackNode<T>* tmp=root;
			root = tmp->next;
			delete tmp;
			lenght--;
		}
		
		int size()const{ return lenght; }
		
		void print()const{
			StackNode<T>* tmp=begin();
			while(tmp != end()){
			cout<<tmp->data<<" ";
			tmp=tmp->next;
			}
		cout<<endl;	
		}
};


int main() {
	Stack<int> s1;
	s1.push(10);
	s1.print();
	
	
	
	
	
	
	return 0;
}
