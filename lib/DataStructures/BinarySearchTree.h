/////////////////////////////
//
//  File:
//      \file BinarySearchTree.h
//
//  Description:
//      \brief Binary Search Tree: Header
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Include Guards:
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

// Forward Declared Dependencies:
//

// Local Include Dependencies:
//

// Compiler Include Dependencies:
//

template <typename T>
struct Node {
	T datum;
	Node *leftChild;
	Node *rightChild;
};

template <typename T>
class BinarySearchTree {

	private:

		Node<T> *root;
		int depth;

	public:

		BinarySearchTree();

		void insert(T data);

		void remove(T data);

		void printData();

}; // BinarySearchTree

#endif // BINARY_SEARCH_TREE_H
