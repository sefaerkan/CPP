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
	int lenght;
	public:
		Queue() : root(NULL),lenght(0){ }
		
		bool isEmpty()const{ return root  == NULL; }
		
		void enqueue(const int& value)
		{
			if(isEmpty())
				root = new QueueNode(value);
			else{
				QueueNode* tmp=root;
				while(tmp->next != NULL)
					tmp = tmp->next;
				tmp->next= new QueueNode(value);	
			}
			lenght++;
		}
		
		void dequeue()
		{
			if(isEmpty())
				throw "Error: Queue::dequeue() for queue is empty";
			QueueNode* tmp=root;
			root = root->next;
			delete tmp;
			lenght--;
		}
		
		void print()const
		{
			QueueNode* tmp=root;
			while(tmp != NULL)
			{
				cout<<tmp->data<<" ";
				tmp = tmp->next;
			}
			cout<<endl;
		}
		
		int size()const{
			return lenght;
			/*QueueNode* tmp = root;
			int counter = 0;
			while(tmp != NULL){
				counter++;
				tmp = tmp->next;
			}
			return counter;*/
		}
};


int main() {
	Queue q;
	cout<<q.isEmpty()<<endl;
	cout<<"Size:"<<q.size()<<endl;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout<<q.isEmpty()<<endl;
	cout<<"Size:"<<q.size()<<endl;
	q.print();
	q.dequeue();
	q.print();
	
	
	
	
	return 0;
}
