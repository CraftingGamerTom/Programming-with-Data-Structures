/*
 * BubbleSort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_
#include <algorithm>
namespace KW {

/** Sort data in the specified sequence using bubble sort.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first An iterator that references
 the first element in the sequence to be sorted
 @param last An iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void bubble_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {

	int pass = 1;
	bool exchanges;
	do {
// Invariant: Elements after position last - pass
// are in place.
		exchanges = false; // No exchanges yet.
// Compare each pair of adjacent elements.
		for (RI first_of_pair = first; first_of_pair != last - pass;
				++first_of_pair) {
			++tot_compare; // A COMPARISON OCCURED
			RI second_of_pair = first_of_pair + 1;
			if (*second_of_pair < *first_of_pair) {
// Exchange pair.
				std::iter_swap(first_of_pair, second_of_pair);
				exchanges = true; // Set flag.
				++tot_exchange; // AN EXCHANGE OCCURED
			}
		}
		pass++;
	} while (exchanges);
// Assert: Array is sorted.
}
} // End namespace KW
#endif
