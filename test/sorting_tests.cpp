/////////////////////////////
//
//  @file sort_test.cpp
//
//  @brief Sort Test Program
//
//  @author J. Caleb Wherry
//
/////////////////////////////

// Compiler Includes:
#include <vector>

// Local Includes:
#include "../lib/sorting/sorting.h"

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
