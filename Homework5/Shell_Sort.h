/*
 * Shell_Sort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef SHELLSORT_H_
#define SHELLSORT_H_
namespace KW {

/** Insert the element at position next_pos in the sorted subarray.
 pre: elements at position 0 through next_pos – 1 are sorted.
 post: elements at position 0 through next_pos are sorted.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first An iterator that references
 the first element in the sequence to be sorted
 @param next_pos An iterator that references
 the element to insert
 @param gap The gap between elements in the sequence to be sorted
 */
template<typename RI>
void insert(RI first, RI next_pos, int gap, int& tot_compare, int& tot_exchange) {
	typename std::iterator_traits<RI>::value_type next_val = *next_pos;
// Shift all values > next_val in subarray down by gap.
	while ((next_pos > first + gap - 1) // First element not shifted.
	&& (next_val < *(next_pos - gap))) {
		++tot_exchange; // AN EXCHANGE OCCURED
		++tot_compare; // A COMPARISON OCCURED
		*next_pos = *(next_pos - gap); // Shift down.
		next_pos -= gap; // Check next position in subarray.
	}
	++tot_compare; // A COMPARISON OCCURED ********** MAYBE NOT NEEDED
	*next_pos = next_val;
}
/** Sort data in the specified range using Shell sort.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first An iterator that references
 the first element in the sequence to be sorted
 @param last An iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void shell_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {

// Set initial gap between adjacent elements.
	int gap = (last - first) / 2;
	while (gap > 0) {
		for (RI next_pos = first + gap; next_pos != last; ++next_pos) {
// Insert element at next_pos in its subarray.
			KW::insert(first, next_pos, gap, tot_compare, tot_exchange);
		} // End for.
// Reset gap for next pass.
		if (gap == 2) {
			gap = 1;
		} else {
			gap = int(gap / 2.2);
		}
	}
}

} // End namespace KW
#endif
