#include <iostream>
using namespace std;

template<typename T>
class vector{
	T* data;
	int cap;
	int index;
		void growth(){ //Kapasite arttýrma 
			if(size() >= capacity()){
				cap *=2;
				T* tmp = new T[cap];
				for(int i=0;i<size();i++)
					tmp[i]=data[i];
				delete[] data;
				data=tmp;
			}
		}
	public:
		vector() : data(NULL),index(0),cap(1){ data = new T[cap]; }
		int size()const{return index; } //Eleman Sayýsý
		int capacity()const{return cap; } //Bellek üzerinde boyu
		void push_back(const T& value)
		{
			growth();//Kapasite kontrol 
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
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.push_back(5);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<endl;
	v.push_back(10);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<endl;
	v.push_back(15);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	return 0;
}
