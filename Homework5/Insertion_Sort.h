/*
 * Insertion_Sort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_
#include <algorithm>
namespace KW {

/** Insert the element at position next_pos in the sorted subarray
 using swap.
 pre: elements at position 0 through next_pos – 1 are sorted.
 post: elements at position 0 through next_pos are sorted.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first An iterator that references
 the first element in the sequence to be sorted
 @param next_pos An iterator that references
 the element to insert
 */
template<typename RI>
void insert(RI first, RI next_pos, int& tot_compare, int& tot_exchange) {
	while (next_pos != first && *next_pos < *(next_pos - 1)) {
		++tot_compare; // A COMPARE OCCURED
		std::iter_swap(next_pos, next_pos - 1); // Exchange pair of values
		++tot_exchange; // AN EXCHANGE OCCURED
		--next_pos; // Check next smaller element
	}
		++tot_compare; // A COMPARE OCCURED
}
/** Sort data in the specified range using insertion sort.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first An iterator that references
 the first element in the sequence to be sorted
 @param last An iterator iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void insertion_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {

	for (RI next_pos = first + 1; next_pos != last; ++next_pos) {
// Invariant: elements at position first through
// next_pos - 1 are sorted.
// Insert element at position next_pos in the sorted subarray.
		insert(first, next_pos, tot_compare, tot_exchange);
	}
}

} // End namespace KW
#endif
