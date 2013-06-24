// J. Caleb Wherry
// Created 12/16/2010
// Test file for doubly-linked list header

#include <iostream>
#include <string>

using namespace std;

#include "DoublyLinkedList.h"

typedef string myType; 

int main() {

    DoublyLinkedList<myType> *list = new DoublyLinkedList<myType>();

	string var = "A";

	for (int i = 1; i <= 10; i++) {
		list->pushBack(var);
		var = var + var;
	}

	cout << "List 1 With Added Items:" << endl;
	list->printData();

	return 0;
}
