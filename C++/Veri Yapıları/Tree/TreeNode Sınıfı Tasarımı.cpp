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

int main() {
	TreeNode* root=NULL;
	root = new TreeNode(10);
	cout<<"Root : "<<root->data<<endl;
	root->left=new TreeNode(5);
	cout<<"Left : "<<root->left->data<<endl;
	root->right=new TreeNode(14);
	cout<<"Right: "<<root->right->data<<endl;
	
	return 0;
}
