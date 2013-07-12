/////////////////////////////
//
//  File:
//      \file searching_tests.cpp
//
//  Description:
//      \brief Searching Tests
//
//  Author:
//      \author J. Caleb Wherry
//
/////////////////////////////

// Compiler Includes:
#include <iostream>
#include <string>

// Local Includes:
#include "SearchUtil.h"

// Namespaces:
namespace SU = searchUtil;
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    bool result = false;

    SU::Test* test = new SU::Test();

    //result = SU::greaterThan(a,b);
    
    cout << "Greater than? " << (result ? "Yes":"No") << endl;

    return 0;
};
