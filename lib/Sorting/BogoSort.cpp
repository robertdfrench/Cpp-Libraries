/////////////////////////////
//
//  File:
//	    BogoSort.cpp
//
//  Description:
//	    Bogo Sort: Implementation
//
//  Author:
//	    J. Caleb Wherry
//
/////////////////////////////

// Local Include Dependencies:
#include "BogoSort.h"

// Compiler Include Dependencies:
#include <iostream>
#include <algorithm>
#include <stdlib.h>

// Definitions:
BogoSort::BogoSort(std::vector<int> inList)
{
    list = inList;
};

int BogoSort::sort()
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

void BogoSort::print()
{
    for(auto &i : list)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
};
