/*
 * Heap_Sort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef HEAPSORT_H_
#define HEAPSORT_H_
#include <algorithm>
namespace KW {

/** build_heap transforms the sequence into a heap.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first A random-access iterator that references
 the first element in the sequence to be sorted
 @param last A random-access iterator that references
 1 past the end of the sequence
 */
template<typename RI>

void build_heap(RI first, RI last, int& tot_compare, int& tot_exchange) {
	int n = 1;
// Invariant: table[first] through table[first + n - 1] is a heap.
	while (n < (last - first)) {
		++n; // Add a new item to the heap and reheap.
		RI child = first + n - 1;
		RI parent = first + (child - first - 1) / 2; // Find parent.
		while (parent >= first && *parent < *child) {
			std::iter_swap(parent, child); // Exchange elements.
			++tot_exchange; // INCREMENT TOT_EXCHANGE *****
			child = parent;
			parent = first + (child - first - 1) / 2;
		}
	}
}
/** shrink_heap transforms a heap into a sorted sequence.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first A random-access iterator that references
 the first element in the sequence to be sorted
 @param last A random-access iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void shrink_heap(RI first, RI last, int& tot_compare, int& tot_exchange) {
	RI n = last;
	/* Invariant: table[first] through table[first + n - 1] forms a heap.
	 table[first + n] through table[last - 1] is sorted.
	 */
	while (n != first) {
		--n;
		std::iter_swap(first, n);
		++tot_exchange; // INCREMENT TOT_EXCHANGE *****

		RI parent = first;
		while (true) {
			RI left_child = first + 2 * (parent - first) + 1;
			if (left_child >= n) {
				++tot_compare; // INCREMENT TOT_COMPARE *****
				break; // No more children.
			}
			RI right_child = left_child + 1;
// Find the larger of the two children.
			RI max_child = left_child;
			if (right_child < n // There is a right child.
			&& *left_child < *right_child) {
				max_child = right_child;
				++tot_compare; // INCREMENT TOT_COMPARE *****
			}
// If the parent is smaller than the larger child,
			if (*parent < *max_child) {
// Swap the parent and child.
				std::iter_swap(parent, max_child);
				++tot_compare; // INCREMENT TOT_COMPARE *****
				++tot_exchange; // INCREMENT TOT_EXCHANGE *****
// Continue at the child level.
				parent = max_child;
			} else { // Heap property is restored.
				break; // Exit the loop.
			}
		}
	}
}
/** Sort data in the specified range using heapsort.
 @param RI An iterator that meets the
 random-access iterator requirements
 @param first A random access iterator that references
 the first element in the sequence to be sorted
 @param last A random-access iterator that references
 1 past the end of the sequence
 */
template<typename RI>
void heap_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {

	build_heap(first, last, tot_compare, tot_exchange);
	shrink_heap(first, last, tot_compare, tot_exchange);
}
} // End namespace KW
#endif
