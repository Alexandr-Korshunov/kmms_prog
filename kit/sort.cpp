#include <iostream>
#include "sort.h" 
namespace kaa {

    void insertSort(int m[], int n) {
        for (int i = 1; i < n; ++i) {
            int key = m[i];
            int j = i - 1;
            while (j >= 0 && m[j] > key) {
                m[j + 1] = m[j];
                j--;
            }
            m[j + 1] = key;
        }
    }

    void sort(int m[], int size) {
        if (size > 1) {
            insertSort(m, size);
        }
    }

}
