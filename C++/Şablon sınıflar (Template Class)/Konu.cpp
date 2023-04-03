#include <iostream>
using namespace std;

template <typename T>
T artir(T x){
	return x+1;
}
template <typename T> //<class T>
void yerdegistir(T&x,T&y){
	T temp = x;
	x = y;
	y = temp;
		
}
template <class T>
class benimSinifim{
	public:
		T data;
		benimSinifim(T data): data(data){}
};

int main() {
	/*int a=5;
	int b=10;
	cout<<a<<"\t"<<b<<endl;
	yerdegistir(a,b);
	cout<<a<<"\t"<<b<<endl;
	char c1 ='A';
	char c2 ='B';
	cout<<c1<<"\t"<<c2<<endl;
	yerdegistir(c1,c2);
	cout<<c1<<"\t"<<c2<<endl;
	*/
	benimSinifim<int> b(2);
	cout<<b.data<<endl;
	
	
	return 0;
}
