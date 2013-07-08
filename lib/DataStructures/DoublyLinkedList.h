/////////////////////////////
//
//  File:
//      \file DoublyLinkedList.h
//
//  Description:
//      \brief Doubly Linked List: Header
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Include Guards:
#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

// Forward Declared Dependencies:
//

// Local Include Dependencies:
//

// Compiler Include Dependencies:
//

template <typename T>
struct Node {
	T datum;
	Node *prev;
	Node *next;
};

template <typename T>
class DoublyLinkedList {

	private:

		int size;
		Node<T> *head;

	public:

		DoublyLinkedList();

		void pushBack(T data);

		void pushFront(T data);

		void popBack(T data);

		void popFront(T data);

		void print();

};

#endif // DOUBLY_LINKED_LIST_H
