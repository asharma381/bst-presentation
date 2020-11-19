#include "bst.h"
#include <iostream>

bst::bst() : root(0) { }

bst::~bst() {
    clear(root);
}

void bst::clear(Node *n) {
    if (n) {
	clear(n->left);
	clear(n->right);
	delete n;
    }
}

bool bst::insert(int value) {
    if (!root) {
	root = new Node(value);
	return true;
    }
    return insert(value, root);
}

bool bst::insert(int value, Node *n) {
    if (value == n->data)
	return false;
    if (value < n->data) {
	if (n->left)
	    return insert(value, n->left);
	else {
	    n->left = new Node(value);
	    n->left->parent = n;
	    return true;
	}
    }
    else {
	if (n->right)
	    return insert(value, n->right);
	else {
	    n->right = new Node(value);
	    n->right->parent = n;
	    return true;
	}
    }
}

void bst::printPreorder() const {
	printPreorder(root);
}

void bst::printInorder() const {
	printInorder(root);
}

void bst::printPostorder() const{
	printPostorder(root);
}


/* DEMO CODE */


void bst::printPreorder(Node *n) const{
	//cout << "TODO PRE-ORDER" << endl;
	if(n){
		cout << n->data << " ";
		printPreorder(n->left);
		printPreorder(n->right);
	}
}

void bst::printInorder(Node *n) const{
	//cout << "TODO IN-ORDER" << endl;
	if(n){
		printInorder(n->left);
		cout << n->data << " ";
		printInorder(n->right);
	}
}

void bst::printPostorder(Node *n) const{
	//cout << "TODO POST-ORDER" << endl;
	if(n){
		printPostorder(n->left);
		printPostorder(n->right);
		cout << n->data << " ";
	}
}
