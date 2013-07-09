/////////////////////////////
//
//  File:
//      \file data-structure-tests.cpp
//
//  Description:
//      \brief DX Tests
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Local Include Dependencies:
#include "DataStructures/SinglyLinkedList.hpp"
#include "DataStructures/DoublyLinkedList.hpp"

// Compiler Include Dependencies:
#include <iostream>
#include <string>

// Typedefs:
typedef int myType; 

// Namespaces:
namespace DLL = doublyLinkedList;
namespace SLL = singlyLinkedList;
using namespace DLL;
using namespace SLL;
using namespace std;

int main() 
{
    // Grab current cout flags, used for when the stream is altered and the user wants
    //   to reset it to the default values: 
    ios::fmtflags f( cout.flags() );

    // Test 1:
    {
	    SinglyLinkedList<char>* list = new SinglyLinkedList<char>();

	    char var = 'A';

	    for (int i = 1; i <= 10; i++) 
        {
		    list->pushBack(var);
		    var++;
	    }

	    cout << endl << "Test 1 - Char list:" << endl << "\t";
	    list->print();
        cout << endl;
    }

    // Reset cout stream flags:
    cout.flags(f);

    // Test 2:
    {
        DoublyLinkedList<myType>* list = new DoublyLinkedList<myType>();

        myType var = 1;

        for (int i = 1; i <= 10; i++) 
        {
            list->pushBack(var);
            var++;
        }

        cout << endl << "Test 2 - Int list:" << endl << "\t";
        list->print();
        cout << endl;
    }

    cout << endl;

    return 0;
}
