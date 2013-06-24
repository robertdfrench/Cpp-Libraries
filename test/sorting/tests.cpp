/////////////////////////////
//
//  File:
//      \file sort_test.cpp
//
//  Description:
//      \brief Sort Test Program
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Compiler Includes:
#include <vector>

// Local Includes:
#include "../../lib/Sorting/Sorting.h"

// Namespaces:
using namespace std;

int main()
{

    // First test list:
    vector<int> testList;

    for (int i = 100; i > 0; i--)
        testList.push_back(i);

    // Create first Sort object:
    Sort* mySort = new Sort(testList);

    mySort->bogoSort();
    mySort->print();

    return 0;
};
