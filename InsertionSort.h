/**************************************************************************************
 **************************************************************************************
 *****                              Ryan Huffman                                  *****
 *****          A template InsertionSort to be tested against BubbleSort          *****
 *****                    and the built in C++ sort operation                     *****
 **************************************************************************************
 **************************************************************************************/

#ifndef MYSORTINGTESTS_INSERTIONSORT_H
#define MYSORTINGTESTS_INSERTIONSORT_H

#include <iterator>


template <typename RandomAccessIterator>
void myInsertionSort(RandomAccessIterator beginIter, RandomAccessIterator endIter) {
    if(beginIter == endIter || beginIter + 1 == endIter && beginIter < endIter) {
        return;
    }
    int length = endIter - beginIter;
    for(RandomAccessIterator current = beginIter + 1; current < length; current++){
        bool needNextPass = false;
        for(RandomAccessIterator endOfPass = endIter - 1; current >= 0 && )
    }
}

#endif //MYSORTINGTESTS_INSERTIONSORT_H

/*
 public class InsertionSort {
   The method for sorting the numbers
public static void insertionSort(int[] list) {
    for (int i = 1; i < list.length; i++) {
         // insert list[i] into a sorted sublist list[0..i-1] so that
             // list[0..i] is sorted.
        int currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--) {
            list[k + 1] = list[k];
        }

        // Insert the current element into list[k+1]
        list[k + 1] = currentElement;
    }
}
 */