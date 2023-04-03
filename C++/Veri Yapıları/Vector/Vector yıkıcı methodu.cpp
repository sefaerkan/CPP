#include <iostream>
using namespace std;
template<class T>
void _swap(T& x,T& y){ //Sýralama Deðiþimi 
	T temp = x;
	x = y;
	y = temp;
}
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
		~vector(){ reset(); }
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
		
		void insert(const T* pos,const T& value){
			if(begin() <= pos && pos <= end()){
				int index = pos - begin();
				push_back(value);
				for(int i=size() - 1; i>index;i--){
					_swap(data[i],data[i-1]);
				}
			}
			else
				throw "Error: Vector insert";
		}
		
		void insert(const T* pos, int n ,const T& value){
			int index=pos-begin();
			for(int i=0;i<n;i++){
				insert(begin() + index + i,value);
			}
		}
		
		void insert(const T* pos,const T* first,const T* last){
			int index= pos-begin();
			while(first != last){
				insert(begin() + index++,*first++);
			}	
		}
		
		void erase(const T* pos){
			if(begin() <= pos && pos <= end()){
				int index = pos - begin();
				for(int i=index; i<size();i++){
					data[i]=data[i + 1];
				}
				pop_back();
			}
			else
				throw "Error: Vector Erase";
		}
		
		void erase(const T* first,const T* last){
			if(first==begin() && last==end()){
				clear();
			}
			else{
				int f=first - begin();
				int l=last- begin();
			 	while(f != l--){
			 		erase(f+begin());
			}
			}
		}
};
int main(int argc, char** argv) {
	int * begin;
	int * end;
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(4);
		v.push_back(5);
		begin= v.begin();
		end= v.end();
	}
	while(begin != end){ //Vectorün scop'u bitse daha dýþarýdan ulaþýlýyor
		cout<<*begin<<" "; //Ama biz Yýkýcý Methodu tanýmladýk ve böyle bir þey olmaz
		begin++;
	}
	cout<<endl;

	
	
	
	
	
return 0;
}
