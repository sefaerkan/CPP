#include <iostream>
using namespace std;
template<class T>
void _swap(T& x,T& y){ //S�ralama De�i�imi 
	T temp=x;
	x=y;
	y=temp;
}
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
		void reset(int index = 0,int cap=1){
			delete [] data;
			data=NULL;
			this->index=index;
			this->cap=cap;
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
};
int main(int argc, char** argv) {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int> v2;
	v2.push_back(10);
	v2.push_back(11);
	v2.push_back(12);
	int dizi[] ={5,6,7,8,9};
	//v.insert(v.begin(),v2.begin(),v2.end()); //v2 yi v nin ba��na ekledik 3.insert
	//v.insert(&v[1],v2.begin(),v2.end()); //v2 yi v ye 1.indisten itibaren ekledik 3.insert
	v.insert(&v[1],dizi,dizi+5);//v'nin 1.indisine dizinin ba��ndan 5.eleman�na kadar ekledik 3.insert 
	//v.insert(v.begin(),0); //Ba��na 0 ekledik
	//v.insert(&v[2],0); //2.indise 0 ekledik
	//v.insert(v.begin(),5,0);//Ba�tan 5 s�f�r ekledik 2.insert
	//v.insert(v.end(),5,0);//Sona 5 s�f�r ekledik 2.insert
	//v.insert(&v[1],5,0);//1.indisten itibaren 5 tane 0 ekle 2.insert
	int* begin=v.begin();
	int* end=v.end();
	while(begin != end){
		cout<<*begin<<" ";
		begin++;
	}
	cout<<endl;
	
	
	
	
return 0;
}
