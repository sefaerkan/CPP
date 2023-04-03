#include <iostream>
using namespace std;

template<typename T>
class vector{
	T* data;
	int cap;
	int index;
	public:
		vector() : data(NULL),index(0),cap(1){
			data = new T[cap];
		}
		int size()const{return index; } //Eleman Say�s�
		int capacity()const{return cap; } //Bellek �zerinde boyu
		void push_back(const T& value)
		{
			data[index++]=value;
		}
		void pop_back()
		{
			index--;
		}
		bool isEmpty()const{
			return size()==0;
		}
		T front()const
		{
			if(isEmpty())
				throw "Error: Vector is empty.";
			return data[0];
		}
		T back()const
		{
			if(isEmpty())
				throw "Error: Vector is empty.";
			return data[index - 1];
		}
		
};
int main() {
	vector<int> v;
	try{
	//cout<<v.front()<<endl;	
	cout<<v.isEmpty()<<endl;
	v.push_back(10);
	v.push_back(11);
	cout<<"Vectorun Basi: "<<v.front()<<endl; //Vectorun Bas�
	//v.pop_back();
	cout<<endl;
	cout<<"Vectorun Sonu: "<<v.back(); //Bo� vector olursa hatad�r
	}catch(const char* e){
		cout<<e<<endl;
	}
	return 0;
}
