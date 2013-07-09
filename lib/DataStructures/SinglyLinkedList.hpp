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
#include <cstdlib>      // NULL
#include <iostream>     // cout, endl

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

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList()
{

    head = NULL;
    tail = NULL;

}

template <typename T>
void SinglyLinkedList<T>::pushBack(T data)
{

    Node<T> *newNode = new Node<T>();
    newNode->next = NULL;
    newNode->datum = data;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {

        Node<T> *lastNode = head;

        while (lastNode->next != NULL) {

            if (lastNode->next == NULL) {
                lastNode->next = newNode;
            }
            else {
                lastNode = lastNode->next;
            }

        }
    }

}

template <typename T>
void SinglyLinkedList<T>::pushFront(T data)
{
    // TODO
}

template <typename T>
void SinglyLinkedList<T>::popBack()
{

    Node<T> *nodeToDelete = new Node<T>();
    nodeToDelete = head;

    while (nodeToDelete->next != NULL)
    {
        // TODO
    }

}

template <typename T>
void SinglyLinkedList<T>::popFront()
{
    // TODO
}

template <typename T>
void SinglyLinkedList<T>::print()
{

    Node<T> *nodeToPrint = new Node<T>();
    nodeToPrint = head;

    while (nodeToPrint->next != NULL)
    {
        std::cout << nodeToPrint->datum << std::endl;
        nodeToPrint = nodeToPrint->next;
    }
}

#endif // SINGLY_LINKED_LIST_H
