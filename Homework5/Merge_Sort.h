/*
 * Merge_Sort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_
namespace KW {
// See Listing 10.6 for merge function
// As shown below
/** Merge data in two sorted input sequences
 into a sorted output sequence.
 pre: Both input sequences are sorted.
 post: The output sequence is sorted and contains all elements
 in both input sequences.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param left An iterator that references
 the first element in the left sequence
 @param end_left An iterator that references
 1 past the end of the left sequence
 @param right An iterator that references
 the first element in the right sequence
 @param end_right An iterator that references
 1 past the end of the right sequence
 @param out An iterator that references
 the first element in the output sequence
 */
template<typename RI>
void merge(RI left, RI end_left, RI right, RI end_right, RI out, int& tot_compare, int& tot_exchange) {
// While there is data in both input sequences
	while (left != end_left && right != end_right) {
		++tot_compare; // A COMPARE OCCURED
// Find the smaller and
// insert it into the output sequence.
		if (*left < *right) {
			++tot_compare; // A COMPARE OCCURED
			*out++ = *left++;
			++tot_exchange; // AN EXCHANGE OCCURED
		} else {
			*out++ = *right++;
			++tot_exchange; // AN EXCHANGE OCCURED
		}
	}
	++tot_compare; // A COMPARE OCCURED
// Assert: one of the sequences has more items to copy.
// Copy remaining input from left sequence into the output.
	while (left != end_left) {
		++tot_compare; // A COMPARE OCCURED
		*out++ = *left++;
		++tot_exchange; // AN EXCHANGE OCCURED
	}
	++tot_compare; // A COMPARE OCCURED
// Copy remaining input from right sequence into output.
	while (right != end_right) {
		++tot_compare; // A COMPARE OCCURED
		*out++ = *right++;
		++tot_exchange; // AN EXCHANGE OCCURED
	}
	++tot_compare; // A COMPARE OCCURED
}

/** Sort data in the specified range using merge sort.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first A random access iterator that references
 the first element in the sequence to be sorted
 @param last A random-access iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void merge_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {

	if (last - first > 1) {
// Split table into two new half tables.
		typedef typename std::iterator_traits<RI>::value_type value_type;
		RI middle = first + (last - first) / 2;
		std::vector < value_type > left_table(first, middle);
		std::vector < value_type > right_table(middle, last);
// Sort the halves.
		KW::merge_sort(left_table.begin(), left_table.end(), tot_compare, tot_exchange);
		KW::merge_sort(right_table.begin(), right_table.end(), tot_compare, tot_exchange);
// Merge the halves back into the original table.
		merge(left_table.begin(), left_table.end(), right_table.begin(), right_table.end(), first, tot_compare, tot_exchange);
	}
}

}
// End namespace KW
#endif
