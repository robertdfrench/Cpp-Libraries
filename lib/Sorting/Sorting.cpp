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
#include <stdlib.h>

// Definitions:
Sort::Sort(std::vector<int> inList)
{
    list = inList;
};

int Sort::bogoSort()
{
    int numIterations = 0;

    srand( time(NULL) );

    while ( !std::is_sorted(list.begin(), list.end()) )
    {
        std::random_shuffle(list.begin(),list.end());

        numIterations++;
    }

    return numIterations;
};

void Sort::print()
{
    for(auto &i : list)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
};
