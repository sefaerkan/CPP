#include <iostream>
using namespace std;

class QueueNode{
	public:
		int data;
		QueueNode* next;
		QueueNode(const int& data=0,QueueNode* next = NULL) : data(data),next(next){}
};

class Queue{
	QueueNode* root;
	public:
		Queue() : root(NULL){ }
		bool isEmpty()const{ return root  == NULL; }
};


int main() {
	Queue q;
	cout<<q.isEmpty()<<endl;
	
	
	
	return 0;
}
