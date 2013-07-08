/////////////////////////////
//
//  File:
//      \file DoublyLinkedList.cpp
//
//  Description:
//      \brief Doubly Linked List Library: Implementation
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Local Include Dependencies:
#include "DoublyLinkedList.h"

// Compiler Include Dependencies:
#include <cstdlib>      // NULL
#include <iostream>     // cout, endl

template <typename T> 
DoublyLinkedList<T>::DoublyLinkedList() 
{
    head = NULL;
    size = 0;
}

template <typename T>
void DoublyLinkedList<T>::pushBack(T data) 
{

    Node<T> *newNode = new Node<T>();
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
    Node<T> *nodeToDelete = new Node<T>();
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
    Node<T> *nodeToPrint = new Node<T>();
    nodeToPrint = head;

    for (int i = 0; i < size; i++) 
    {
        std::cout << nodeToPrint->datum << std::endl;
		nodeToPrint = nodeToPrint->next;
	}
}
