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
	QueueNode* tail;
	int lenght;
	public:
		Queue() : root(NULL),tail(NULL),lenght(0){ }
		
		bool isEmpty()const{ return root  == NULL; }
		
		void enqueue(const int& value)
		{
			if(isEmpty()){
				root = new QueueNode(value);
				tail=root;
			}
			else{
				tail->next= new QueueNode(value);
				tail=tail->next;
			}
			lenght++;
		}
		
		int front()const{
			if(isEmpty())
				throw "Error: Queue::front() for queue is empty";
			return root->data;	
		}
		
		int back()const{
			if(isEmpty())
				throw "Error: Queue::back() for queue is empty";
			return tail->data;	
		}
		
		void dequeue()
		{
			if(isEmpty())
				throw "Error: Queue::dequeue() for queue is empty";
			QueueNode* tmp=root;
			if(root == tail)
				tail=tmp->next;
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
	cout<<"Front: "<<q.front()<<endl;
	cout<<"Back: "<<q.back()<<endl;
	q.dequeue();
	q.print();
	cout<<"Front: "<<q.front()<<endl;
	cout<<"Back: "<<q.back()<<endl;
	
	
	
	return 0;
}
