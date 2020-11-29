/**************************************************************************************
 **************************************************************************************
 *****                              Ryan Huffman                                  *****
 *****          A template InsertionSort to be tested against BubbleSort          *****
 *****                    and the built in C++ sort operation                     *****
 **************************************************************************************
 **************************************************************************************/

#ifndef MYSORTINGTESTS_MYINSERTIONSORT_H
#define MYSORTINGTESTS_MYINSERTIONSORT_H

#include <iterator>

using namespace std;

template <typename RandomAccessIterator>
void myInsertionSort(RandomAccessIterator beginIter, RandomAccessIterator endIter) {
    if(beginIter == endIter || beginIter + 1 == endIter) {
        return;
    }

    for(RandomAccessIterator iItr = beginIter + 1; iItr < endIter; iItr++){
        typename iterator_traits<RandomAccessIterator>::value_type currentElement = *iItr;
        RandomAccessIterator kItr;
        for(kItr = iItr - 1; kItr >= beginIter && *kItr > currentElement; kItr--){
            *(kItr + 1) = *kItr;
        }
        *(kItr + 1) = currentElement;
    }
}

#endif //MYSORTINGTESTS_MYINSERTIONSORT_H

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