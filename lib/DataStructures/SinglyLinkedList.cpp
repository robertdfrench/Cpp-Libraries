/////////////////////////////
//
//  File:
//      \file SinglyLinkedList.cpp
//
//  Description:
//      \brief Singly Linked List Library: Implementation
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Local Include Dependencies:
#include "SinglyLinkedList.h"

// Compiler Include Dependencies:
#include <cstdlib>      // NULL
#include <iostream>     // cout, endl

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

}

template <typename T>
void SinglyLinkedList<T>::popBack() 
{

	Node<T> *nodeToDelete = new Node<T>();
	nodeToDelete = head;

	while (nodeToDelete->next != NULL) 
    {
        // ...
	}

}

template <typename T>
void SinglyLinkedList<T>::popFront() 
{

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
