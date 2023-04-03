#include <iostream>
using namespace std;

template<class T>
class QueueNode{
	public:
		T data;
		QueueNode<T>* next;
		QueueNode(const T& data=T(),QueueNode<T>* next = NULL) : data(data),next(next){}
};

template<class T>
class Queue{
	QueueNode<T>* root;
	QueueNode<T>* tail;
	int lenght;
	void makeEmpty(){
		while(!isEmpty())
			dequeue();
	}
	public:
		Queue() : root(NULL),tail(NULL),lenght(0){ }
		Queue(const Queue<T>& rhs): Queue<T>(){ *this = rhs; }
		~Queue(){    makeEmpty();        }
		Queue<T>& operator=(const Queue<T>& rhs){ return assing(rhs); }
		Queue<T>& assing(const Queue<T>& rhs){
			makeEmpty();
			QueueNode<T>* tmp=rhs.root;
			while(tmp != NULL){
				enqueue(tmp->data);
				tmp = tmp->next;
			}
		}
		
		bool isEmpty()const{ return root  == NULL; }
		
		void enqueue(const T& value)
		{
			if(isEmpty()){
				root = new QueueNode<T>(value);
				tail=root;
			}
			else{
				tail->next= new QueueNode<T>(value);
				tail=tail->next;
			}
			lenght++;
		}
		
		T front()const{
			if(isEmpty())
				throw "Error: Queue::front() for queue is empty";
			return root->data;	
		}
		
		T back()const{
			if(isEmpty())
				throw "Error: Queue::back() for queue is empty";
			return tail->data;	
		}
		
		void dequeue()
		{
			if(isEmpty())
				throw "Error: Queue::dequeue() for queue is empty";
			QueueNode<T>* tmp=root;
			if(root == tail)
				tail=tmp->next;
			root = root->next;
			delete tmp;
			lenght--;
		}
		
		void print()const
		{
			QueueNode<T>* tmp=root;
			while(tmp != NULL)
			{
				cout<<tmp->data<<" ";
				tmp = tmp->next;
			}
			cout<<endl;
		}
		
		int size()const{
			return lenght;
			/*QueueNode<T>* tmp = root;
			int counter = 0;
			while(tmp != NULL){
				counter++;
				tmp = tmp->next;
			}
			return counter;*/
		}
};


int main() {
	
	
	
	return 0;
}
