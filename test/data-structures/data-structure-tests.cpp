// J. Caleb Wherry
// Created 12/16/2010
// Test file for singly-linked list header

// Local Include Dependencies:
#include "DataStructures/SinglyLinkedList.h"
//#include "DataStructures/DoublyLinkedList.h"

// Compiler Include Dependencies:
#include <iostream>
#include <string>

// Typedefs:
typedef int myType; 

// Namespaces:
using namespace std;

int main() 
{
    // Test 1:
	SinglyLinkedList<myType>* list = new SinglyLinkedList<myType>();

	myType var = 1;

	for (int i = 1; i <= 10; i++) {
		list->pushBack(var);
		var = var + var;
	}

	cout << "List 1 With Added Items:" << endl;
	list->print();

    // Test 2:
    /*
    DoublyLinkedList<myType>* list = new DoublyLinkedList<myType>();

    string var = "A";

    for (int i = 1; i <= 10; i++) {
        list->pushBack(var);
        var = var + var;
    }

    cout << "List 1 With Added Items:" << endl;
    list->print();
    */

    return 0;
}
