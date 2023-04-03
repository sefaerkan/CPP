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
	};
int main() {
	vector<int> v;
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	return 0;
}
