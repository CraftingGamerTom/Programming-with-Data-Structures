/*
 * Selection_Sort.h
 *
 *  Created on: Nov 14, 2017
 *      Author: TomWR
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

#include <algorithm>

#include "Selection_Sort.h"
#include "Bubble_Sort.h"
#include "Insertion_Sort.h"
#include "Shell_Sort.h"
#include "Merge_Sort.h"
#include "Heap_Sort.h"
#include "Quick_Sort.h"

namespace KW {

/** Sort data in the specified sequence using selection sort.
    @param RI An iterator that meets the
              random-access iterator requirements
    @param first An iterator that references the first element
                 of the sequence to be sorted
    @param last An iterator that references one past the
                end of the sequence to be sorted
*/
template<typename RI>
  void selection_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
  tot_compare = 0;
  tot_exchange = 0;
  RI itr = first;
  for (RI fill = first; fill != last - 1; ++fill) {
    // Invariant: Elements at positions first through fill - 1 are sorted.
    RI pos_min = fill;
    for (RI next = fill + 1; next != last; ++next) {
      // Invariant: pos_min references the smallest item in
      //            positions fill through next - 1.
      ++tot_compare;
      if (*next < *pos_min) {
        pos_min = next;
      }
    }
    // Assert: pos_min references the smallest item in positions fill
    // through last - 1.
    // If the next smallest item is not at fill, exchange *fill and
    // *pos_min.
    if (fill != pos_min) {
      ++tot_exchange;
      std::iter_swap(pos_min, fill);
    }
  }
}

} // End namespace KW

#endif
