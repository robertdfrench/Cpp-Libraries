/////////////////////////////
//
//  File:
//     SearchUtil.hpp
//
//  Description:
//      Search Utilities: Impl
//
//  Author:
//      J. Caleb Wherry
//
/////////////////////////////

// Local Include Dependencies:
#include "SearchUtil.h"

// Compiler Include Dependencies:
#include <string>
#include <iostream>

// Forward Declared Dependencies:
//

// Namespaces:
using namespace searchUtil;

Test::Test()
{
    std::cout << "WHaaaat" << std::endl;
}

// Test function
bool Test::greaterThan(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}

int Test::what()
{
    return 7;
}

void searchUtil::printSomeShit()
{
    std::cout << "New print function" << std::endl;
}
