#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T>& v){
	typename vector<T>::iterator i= v.begin(); //Genelleþtirilmiþ Pointer Ýterator
	while(i != v.end())
		cout<<*i++<<" ";
}


int main(int argc, char** argv) {
	vector<int> v;
	vector<int> v1(5,10);
	vector<int> v2(10);
	vector<int> v3(&v2[5],&v2[8]);
	vector<int> v4(v1);
	
	print(v1);
	cout<<endl;
	print(v2);
	cout<<endl;
	print(v3);
	cout<<endl;
	print(v4);
	
	
	
	
	return 0;
}
