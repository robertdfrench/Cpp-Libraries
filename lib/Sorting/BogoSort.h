/////////////////////////////
//
//  File:
//     BogoSort.h
//
//  Description:
//      Bogo Sort: Header
//
//  Author:
//      J. Caleb Wherry
//
/////////////////////////////

// Include Guard:
#ifndef BOGO_SORT_H
#define BOGO_SORT_H

// Forward Declared Dependencies:
//

// Local Include Dependencies:
//

// Compiler Include Dependencies:
#include <vector>

// Definitions:
class BogoSort {

	private:
		std::vector<int> list;

        BogoSort() { }

	public:
        BogoSort(std::vector<int> inList);

		int sort();
        void print();
};

#endif // BOGO_SORT_H
