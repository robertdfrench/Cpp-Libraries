/////////////////////////////
//
//  File:
//      sort.h
//
//  Description:
//      Sort Algorithms: Header
//
//  Author:
//      J. Caleb Wherry
//
/////////////////////////////

// Include Guard:
#ifndef SORT_H
#define SORT_H

// Forward Declared Dependencies:
//

// Include Dependencies:
#include <vector>

// Definitions:
class Sort {

	private:
		std::vector<int> list;

        Sort() { }

	public:
        Sort(std::vector<int> inList);

		void bogoSort();
        void print();
};

#endif // SORT_H
