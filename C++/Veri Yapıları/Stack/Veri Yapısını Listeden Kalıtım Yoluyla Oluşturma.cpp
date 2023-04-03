#include <iostream>
using namespace std;

template<class T>
class Node{ 
	public:
		Node(const T& data=T(), Node<T>* next=NULL ): data(data),next(next){} 
		T data; 
		Node<T>* next; 
};
template<class T>
class list{ 
	Node<T>* root; 
	Node<T>* tail; 
	int length; 
	Node<T>* findPrev(Node<T>* pos){
		Node<T>* tmp=root;
		Node<T>* stop=end();
		while(tmp != stop && tmp->next != pos){
			tmp=tmp->next;
		}
		return tmp;
	}
	public:
		list(){
			length=0;
			root = new Node<T>();
			tail=root;
			tail->next= new Node<T>();
		}
	
		list(int n,const T& value=T()): list<T>(){ insert(end(),n,value);}
		
		list(Node<T>* first, Node<T>* last): list<T>(){
			while(first != last){
				insert(end(),first->data);
				first=first->next;
			}
		}
		
		list(const list<T>& rhs): list<T>(rhs.begin(),rhs.end()){}
		
		~list(){ //Yýkýcý Fonksiyon
			clear();
			delete tail->next;
			delete tail;
		}
	
		list<T>& operator=(const list<T>& rhs){return assign(rhs);} //Eþittir operatörü ile listler arasý kopyalama
		
		list<T>& assign(const list<T>& rhs){ //atama fonskiyonu
			clear();
			Node<T>* tmp=rhs.begin();
			while(tmp != rhs.end()){
				push_back(tmp->data);
				tmp =tmp-> next;
			}
			return *this;
		}
		
		Node<T>* begin()const{return root->next;} //baþlangýç 
		Node<T>* end()const{return tail->next;} //Bitiþ
		bool isEmpty()const{return begin()==end();} //Boþ mu sorgu kontrolü
		int size()const{return length;} //Size sorgusu
		
		void push_back(const T& value){ insert(end(),value);} //En sona ekleme fonksiyonu
		void push_front(const T& value){ insert(begin(),value);} //En baþa ekleme fonksiyonu
		
		void insert(Node<T>* pos,const T& value){ //Ekleme fonskiyonu
			if(pos==end()){
				tail->next= new Node<T>(value,end());
				tail=tail->next;
			}else{
				Node<T>* tmp=findPrev(pos);
				if(tmp == end())
					throw "Error: list::insert() for pos in not list";
				tmp->next=new Node<T>(value,tmp->next);	
			}
			length++;
		}
		
		void insert(Node<T>* pos,int n,const T& value){ //Ekleme fonskiyonu
			for(int i=0;i<n;i++)
				insert(pos,value);
		}
		
		void insert(Node<T>* pos,Node<T>* first,Node<T>* last){ //Ekleme fonskiyonu
			while(first != last){
				insert(pos,first->data);
				first=first->next;
			}
		}
		
		void erase(Node<T>* pos){ //Silme fonskiyonu
			if(isEmpty())
				throw "Error: list::erase() icin liste bos";
			Node<T>* prev= root;
			if(pos  == end() || pos == tail )
			{
				pos=tail;
				prev= findPrev(pos);
				prev->next=pos->next;
				tail=prev;
			}
			else{
				prev=findPrev(pos);
				if(prev== end())
					throw "Error : list::erase() liste yok";
				prev->next= pos->next;		
			}
			delete pos;
			length--;
		}
			
		void erase(Node<T>* first,Node<T>* last){ //Silme fonskiyonu
			Node<T>* tmp;
			while(first != last){
				tmp=first;
				first=first->next;
				erase(tmp);
			}
		}	
		
		void clear(){ //Temizleme Fonksiyonu
			erase(begin(),end());
		}
		
		T front()const{ //Baþtaki deðeri döndürme
			if(isEmpty())
				throw "Error: list::front() liste bos";
			return begin()->data;	
		}
		
		T back()const{ //Sondaki deðeri döndürme
			if(isEmpty())
				throw "Error: list::back() liste bos";
			return tail->data;	
		}
		
		void pop_front(){ //Baþtan eleman çýkarma
			try{erase(begin());}
			catch(const char* ex){throw "Error: list::pop_front() liste bos";}
		}
		
		void pop_back(){ //Sondan eleman çýkarma
			try{erase(end());}
			catch(const char* ex){throw "Error: list::pop_back() liste bos";}
		}
		
		void print()const{ //Yazdýrma fonksiyonu
			Node<T>* tmp = begin();
			while(tmp != end()){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<endl;
		}
};

template <class T>
class Stack:private list<T>{
	public:
		Stack() : list<T>(){ }
		bool isEmpty()const{ return list<T>::isEmpty(); }
		void push(const T& value){ list<T>::push_front(value); }		
		void pop()
		{ 
			try{ list<T>::pop_front(); }
			catch(const char* ex) { throw "Error : Stack::pop() for stack is empty";}	
		}
		int size()const{ return list<T>::size(); }
		T top()const
		{
			try{ return list<T>::front();  }
			catch(const char* ex) { throw "Error : Stack::top() for stack is empty";}	
		}
		void print()const{ list<T>::print(); }
};

int main() {  
	Stack<int> s;
	cout<<s.isEmpty()<<endl;
	s.push(10);
	s.push(20);
	s.push(25);
	s.print();
	cout<<"Top: "<<s.top()<<endl;
	
	return 0;
}
