/////////////////////////////
//
//  File:
//      \file sorting_tests.cpp
//
//  Description:
//      \brief Sorting Tests
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Compiler Includes:
#include <iostream>
#include <vector>
#include <stdlib.h>

// Local Includes:
#include "BogoSort.hpp"

// Typedefs:
typedef int myType;

// Namespaces:
using namespace std;

// Functions:
int factorial(int x, int result);

int main()
{

    int numItems = 10;

    srand( time(NULL) );

    // First test list:
    vector<myType> testList;

    // Fill the vector with 10 random ints:
    for (int i = numItems; i > 0; i--)
        testList.push_back(rand() % 100);

    // Create first Sort object:
    BogoSort<myType>* bogoSort = new BogoSort<myType>(testList);

    // Print the list at first:
    cout << endl << "Unsorted List: " << endl << "\t";
    bogoSort->print();

    cout << endl << "Testing Bogo Sort..." << endl;

    // Bogo sort that shit:
    int numIterations = bogoSort->sort();

    // Print it:
    cout << "\tSorted List: ";
    bogoSort->print();

    // Other stuff:
    cout << "\tNumber of shuffles: " << numIterations << endl;
    cout << "\tAverage complexity: O(n!) - " << factorial(numItems, 1) << endl;
    cout << endl;

    return 0;
};

int factorial (int x, int result)
{
    if (x == 1) 
    {
        return result;
    }
    else 
    {
        return factorial( x-1, x*result );
    }
}
