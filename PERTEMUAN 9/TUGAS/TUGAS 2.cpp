#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree{
	public:
		Node* root;
		Tree() { root = NULL; }

		void insert(int value){
			root = insert(root, value);
		}
		
		Node* insert(Node* node, char value){
			if (node == NULL){
				node = new Node(value);
			} else if (value <= node->data) {
			  node->left = insert(node->left, value);
			} else {
			  node->right = insert(node->right, value);		
			}
			return node;
		}
		
		void inorder() { inorder(root); }

		void inorder(Node* node){
			if(node == NULL) return;
			inorder(node->left);
			cout<<node->data<<" ";
			inorder(node->right);
		}
		
		void preorder() { preorder(root); }
		
		void preorder(Node* node){
			if(node == NULL) return;
			cout<<node->data<<" ";
			preorder(node->left);
			preorder(node->right);
		}
		
		void postorder() { postorder(root); }
		
		void postorder(Node* node){
			if(node == NULL) return;
			postorder(node->left);
			postorder(node->right);
			cout<<node->data<<" ";
		}
};

int main(){
	Tree tree;
	
	int x = 5, y;
	
	cout<<"Masukkan Bilangan:"<<endl;
	
	for (int i=0 ; i<x ; i++){
		cout<<"Bilangan Ke-"<<i+1<<" :";
		cin>>y;
		cout<<endl;
		
		tree.insert(y);
	}
	
	cout<<"Preorder: ";
	tree.preorder();
	cout<<endl;
	cout<<"Inorder: ";
	tree.inorder();
	cout<<endl;
	cout<<"Postorder: ";
	tree.postorder();
	
	
	
	return 0;
}
