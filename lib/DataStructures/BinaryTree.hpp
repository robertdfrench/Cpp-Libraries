/////////////////////////////
//
//  File:
//      \file BinaryTree.hpp
//
//  Description:
//      \brief Binary Tree: Templated Header & Impl
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
#include <cstdlib>
#include <iostream>

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

template <typename T>
BinaryTree<T>::BinaryTree()
{
    root = NULL;
    depth = 0;
}

template <typename T>
void BinaryTree<T>::preOrderTraversal()
{
    // TODO
}

template <typename T>
void BinaryTree<T>::inOrderTraversal()
{
    // TODO
}

template <typename T>
void BinaryTree<T>::postOrderTraversal()
{
    // TODO
}

template <typename T>
void BinaryTree<T>::breadthFirstTraversal()
{
    // TODO
}

template <typename T>
void BinaryTree<T>::printTree()
{
    // TODO
}

#endif // BINARY_TREE_H
