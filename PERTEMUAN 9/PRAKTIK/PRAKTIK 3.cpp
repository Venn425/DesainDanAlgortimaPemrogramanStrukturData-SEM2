#include <iostream>
using namespace std;

class Node {
	public:
		char data;
		Node* left;
		Node* right;
		
		Node(char value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree{
	public:
		Node* root;
		Tree() { root = NULL; }

		void insert(char value){
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
	
	tree.insert('R');
	tree.insert('A');
	tree.insert('E');
	tree.insert('S');
	tree.insert('I');
	tree.insert('T');
	
	cout<<"Posisi Awal Tree \n";
	cout<<"\t    R\n\t   / \\\n\t  A   E\n\t /\n\t S\n\t/ \\\n\tI T\n\n";
	
	
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
