/////////////////////////////
//
//  File:
//     StringUtil.h
//
//  Description:
//      String Utilities: Header
//
//  Author:
//      J. Caleb Wherry
//
/////////////////////////////

// Include Guard:
#ifndef STRING_UTIL_H
#define STRING_UTIL_H

// Local Include Dependencies:
//

// Compiler Include Dependencies:
#include <sstream>
#include <string>

// Forward Declared Dependencies:
//

/// stringUtil Namespace
namespace stringUtil
{
    /// Prints any type to string
    template <typename T>
    std::string toString(T inVar)
    {
        std::ostringstream ss;
        ss << inVar;
    
        return ss.str();
    }

    /// Returns length of a string
    int length(const std::string& inStr);    

} // namespace stringUtil

#endif // STRING_UTIL_H
