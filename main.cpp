#include<iostream>
#include "bst.h"

using namespace std;

int main(){
	bst bst1;
    bst1.insert(25);
    bst1.insert(20);
    bst1.insert(10);
    bst1.insert(22);
    bst1.insert(5);
    bst1.insert(12);
    bst1.insert(1);
    bst1.insert(8);
    bst1.insert(15);
    bst1.insert(36);
    bst1.insert(30);
    bst1.insert(28);
    bst1.insert(40);
    bst1.insert(38);
    bst1.insert(48);
    bst1.insert(45);
    bst1.insert(50);

    cout << "Testing Implementation: " << endl;
    cout << "BST Preorder: ";
    bst1.printPreorder();
    cout << endl;

    cout << "BST Inorder: ";
    bst1.printInorder();
    cout << endl;

    cout << "BST Postorder: ";
    bst1.printPostorder();
    cout << endl;
}

