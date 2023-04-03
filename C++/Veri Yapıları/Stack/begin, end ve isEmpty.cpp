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
};


int main() {
	Stack s;
	s.isEmpty();
	
	
	return 0;
}
