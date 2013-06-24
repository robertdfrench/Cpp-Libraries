/////////////////////////////
//
//  File:
//	    sort.cpp
//
//  Description:
//	    Sort Algorithms: Implementation
//
//  Author:
//	    J. Caleb Wherry
//
/////////////////////////////

// Include Dependencies:
#include "Sorting.h"
#include <iostream>
#include <algorithm>

// Definitions:
Sort::Sort(std::vector<int> inList)
{
    list = inList;
};

void Sort::bogoSort()
{
    std::sort(list.begin(), list.end());
};

void Sort::print()
{
    for(auto &i : list)
    {
        std::cout << i << std::endl;
    }
};
