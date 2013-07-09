/////////////////////////////
//
//  File:
//      \file DoublyLinkedList.hpp
//
//  Description:
//      \brief Doubly Linked List: Templated Header & Impl
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
#include <cstdlib>      // NULL
#include <iostream>     // cout, endl

template <typename T>
struct Node {
	T datum;
	Node* prev;
	Node* next;
};

template <typename T>
class DoublyLinkedList {

	private:

		int size;
		Node<T>* head;

	public:

		DoublyLinkedList();

		void pushBack(T data);

		void pushFront(T data);

		void popBack(T data);

		void popFront(T data);

		void print();

}; // DoublyLinkedList

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList()
{
    head = NULL;
    size = 0;
}

template <typename T>
void DoublyLinkedList<T>::pushBack(T data)
{

    Node<T>* newNode = new Node<T>();
    newNode->next = NULL;
    newNode->datum = data;

    if (size == 0)
    {
        head = newNode;
        size++;
    }
    else
    {
        Node<T> *lastNode = head;

        for (int i = 0; i < size; i++)
        {
            if (lastNode->next == NULL)
            {
                lastNode->next = newNode;
                size++;
            }
            else
            {
                lastNode = lastNode->next;
            }
        }
    }
}

template <typename T>
void DoublyLinkedList<T>::pushFront(T data)
{
    // TODO
}

template <typename T>
void DoublyLinkedList<T>::popBack(T data)
{
    Node<T>* nodeToDelete = new Node<T>();
    nodeToDelete = head;

    for (int i = 0; i < size; i++)
    {
        if (data == nodeToDelete->datum)
        {
            // TODO
        }
    }
}

template <typename T>
void DoublyLinkedList<T>::popFront(T data)
{
    // TODO
}

template <typename T>
void DoublyLinkedList<T>::print()
{
    Node<T>* nodeToPrint = new Node<T>();
    nodeToPrint = head;

    for (int i = 0; i < size; i++)
    {
        std::cout << nodeToPrint->datum << std::endl;
        nodeToPrint = nodeToPrint->next;
    }
}

#endif // DOUBLY_LINKED_LIST_H
