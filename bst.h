#include<iostream>
using namespace std;

class bst {
public:
	bst();                   
    ~bst();                  
	bool insert(int data);

	void printPreorder() const;
	void printInorder() const;
	void printPostorder() const;

private:
	struct Node{
		int data;
		Node* left;
		Node* right;
		Node* parent;
	 Node(int v=0) : data(v), left(0), right(0), parent(0) { }
	};
	Node *root;

	void printPreorder(Node *n) const;
	void printInorder(Node *n) const;
	void printPostorder(Node *n) const;
	
	bool insert(int data, Node *n);
	void clear(Node *n);
};