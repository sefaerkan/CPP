#include <iostream>
using namespace std;

class TreeNode{
	public:
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int data=0,TreeNode* left=NULL,TreeNode* right=NULL)
	: data(data),left(left),right(right){ }
};
class BinaryTree{
	TreeNode* root;
	public:
		BinaryTree() : root(NULL){ }
		bool isEmpty()const{ return root == NULL ; }
		TreeNode* getRoot()const{return root; }
};

int main() {
	BinaryTree btree;
	cout<<btree.isEmpty()<<endl;
	cout<<btree.getRoot()<<endl;
	
	return 0;
}
