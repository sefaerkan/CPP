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
		
		void shrink(){ //Dinamik Küçülme Ýþlemi
			if(size() <= capacity() / 2){
				cap /= 2;
				T* tmp= new T[cap];
				for(int i=0;i<size();i++)
					tmp[i]=data[i];
				delete[] data;
				data=tmp;	
			}
		} 
		void reset(int index = 0,int cap=1){
			delete [] data;
			data=NULL;
			this->index=index;
			this->cap=cap;
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
			if(isEmpty())
				throw "Error: Vector is empty.";
			index--;
			shrink();  //Dinamik Küçülme Ýþlemi
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
		
		T* begin()const{
			return data;
		}
		
		T* end()const{ //Vectörümüzün arka planda açýlan dizisinin nerede bittiðini takip ederiz.
			return data + size();		
		}
		
		T& at(int indis){
			if(indis >= 0 && indis< size())
				return data[indis];
			throw "Error : Vector indis overflow";
					
		}
		
		T& operator[](int indis){
			return at(indis);
		}
		void clear(){
			reset();
			data = new T[cap];
		}
};
int main(int argc, char** argv) {
	vector<int> v;
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	v.push_back(2);
	v.push_back(10);
	v.push_back(15);
	v.push_back(20);
	v.push_back(50);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	int * begin=v.begin();
	int * end=v.end();
	while(begin != end){
		cout<<*begin<<" ";
		begin++;
	}
	cout<<endl;
	v.clear();//Elemanlar Silindi
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	begin=v.begin();
	end=v.end();
	while(begin != end){
		cout<<*begin<<" ";
		begin++;
	}
	cout<<"vector sonu"<<endl;
return 0;
}
