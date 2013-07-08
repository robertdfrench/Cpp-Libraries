/////////////////////////////
//
//  File:
//      \file BinaryTree.h
//
//  Description:
//      \brief Binary Tree: Header
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Include Guards:
#ifndef BINARY_TREE_H
#define BINARY_TREE_H

// Forward Declared Dependencies:
//

// Local Include Dependencies:
//

// Compiler Include Dependencies:
//

template <typename T>
struct Node {
	T datum;
	Node* leftChild;
	Node* rightChild;
};

template <typename T>
class BinaryTree {

	private:

		Node<T>* root;
		int depth;

	public:

		BinaryTree();

        void preOrderTraversal();

        void inOrderTraversal();

        void postOrderTraversal();

        void breadthFirstTraversal();

        void printTree();

}; // BinaryTree

#endif // BINARY_TREE_H
