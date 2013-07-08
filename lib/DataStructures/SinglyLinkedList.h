/////////////////////////////
//
//  File:
//      \file SinglyLinkedList.h
//
//  Description:
//      \brief Singly Linked List: Header
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Include Guards:
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

// Forward Declared Dependencies:
//

// Local Include Dependencies:
//

// Compiler Include Dependencies:
//

template <typename T>
struct Node {
	T datum;
	Node* next;
};

template <typename T>
class SinglyLinkedList {

	private:

		Node<T> *head;
		Node<T> *tail;

	public:

		SinglyLinkedList();

		void insert(T data);

		void remove(T data);

		bool contains(T data);

		void pushBack(T data);

		void pushFront(T data);

		void popBack();

		void popFront();

		void print();

		void printReverse();
};

#endif // SINGLY_LINKED_LIST_H
