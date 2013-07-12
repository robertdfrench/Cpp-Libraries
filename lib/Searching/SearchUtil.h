/////////////////////////////
//
//  File:
//     SearchUtil.h
//
//  Description:
//      Search Utilities: Header
//
//  Author:
//      J. Caleb Wherry
//
/////////////////////////////

// Include Guard:
#ifndef SEARCH_UTIL_H
#define SEARCH_UTIL_H

// Local Include Dependencies:
//

// Compiler Include Dependencies:
#include <string>

// Forward Declared Dependencies:
//

/// searchUtil Namespace
namespace searchUtil
{
    class Test
    {
        private:
            int a;
            double b;

        public:
            Test();
            bool greaterThan(int a, int b);
            int what();
    };

} // namespace searchUtil

#endif // SEARCH_UTIL_H
