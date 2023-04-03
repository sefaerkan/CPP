#include <iostream>
using namespace std;

template <class T>
class V{
	T* data;
	int index;
	public:
		V() : index(0){
			data = new T[100];
		}
		void ekle(T t){ data[index++]=t; }
		
		bool isEmpty()const{ return index == 0;	}
		
		void print()const{
			for(int i=0;i<index;i++){
			cout<<data[i]<<" ";
			if(!isEmpty()){
				cout<<endl;
			}
			}
		}
		
		V<T> operator+(const V<T>& v){
			V<T> temp;
			for(int i=0;i<index;i++){
				temp.ekle(data[i] + v.data[i]);
			}
			return temp;
		}
};



int main() {
	V<string> v1,v2;
	v1.ekle("Ali");
	v1.ekle("Veli");
	v1.ekle("Ayse");
	v1.print();
	v2.ekle("Sanli");
	v2.ekle("Turk");
	v2.ekle("Bayragi");
	v2.print();
	V<string> v3= v1 + v2;
	v3.print();
return 0;
}
