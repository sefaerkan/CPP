#include <iostream>
using namespace std;
template<typename T>
class vector{
	T* data;
	int cap;
	int index;
		void growth(){ //Kapasite artt�rma 
			if(size() >= capacity()){
				cap *=2;
				T* tmp = new T[cap];
				for(int i=0;i<size();i++)
					tmp[i]=data[i];
				delete[] data;
				data=tmp;
			}
		}
		
		void shrink(){ //Dinamik K���lme ��lemi
			if(size() <= capacity() / 2){
				cap /= 2;
				T* tmp= new T[cap];
				for(int i=0;i<size();i++)
					tmp[i]=data[i];
				delete[] data;
				data=tmp;	
			}
		} 
		
	public:
		vector() : data(NULL),index(0),cap(1){ data = new T[cap]; }
		int size()const{return index; } //Eleman Say�s�
		int capacity()const{return cap; } //Bellek �zerinde boyu
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
			shrink();  //Dinamik K���lme ��lemi
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
		
		T* end()const{ //Vect�r�m�z�n arka planda a��lan dizisinin nerede bitti�ini takip ederiz.
			return data + size();		
		}
};
int main() {
		vector<int> v;
		v.push_back(5);
		v.push_back(6);
		v.push_back(2);
		v.push_back(5);
		v.push_back(100);
		cout<<v.size()<<endl;
		cout<<v.capacity()<<endl;
		int* begin=v.begin();
		int* end=v.end();
		while(begin != end){
			cout<<*begin<<" ";
			begin++;
		}
		

	return 0;
}
