// J. Caleb Wherry
// Created 12/16/2010
// Test file for singly-linked list header

#include <iostream>
#include <string>

using namespace std;

#include "SinglyLinkedList.h"

typedef int myType; 

int main() {

	SinglyLinkedList<myType> *list = new SinglyLinkedList<myType>();

	myType var = 1;

	for (int i = 1; i <= 10; i++) {
		list->pushBack(var);
		var = var + var;
	}

	cout << "List 1 With Added Items:" << endl;
	list->printData();

	return 0;
}
