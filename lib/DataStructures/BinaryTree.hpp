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
#include "Tree.hpp"

// Compiler Include Dependencies:
#include <cstdlib>
#include <iostream>

// Namespaces:
using namespace tree;

// Namespace:
namespace binaryTree
{
    // Binary Tree Node:
    template <typename T>
    struct Node 
    {
        T datum;
        Node* leftChild;
        Node* rightChild;
    };

    // Binary Tree class:
    template <typename T>
    class BinaryTree: public Tree
    {
        private:
            Node<T>* root;

        public:
            BinaryTree();

            void preOrderTraversal();

            void inOrderTraversal();

            void postOrderTraversal();

            void breadthFirstTraversal();

            void print();

    }; // BinaryTree

    template <typename T>
    BinaryTree<T>::BinaryTree()
        : root(NULL), 
          Tree(0)
    {
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
    void BinaryTree<T>::print()
    {
        // TODO
    }

} // binaryTree namespace

#endif // BINARY_TREE_H
