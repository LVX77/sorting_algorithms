#include "library.h"

void    quick_sort(int *list, int left, int right)
{
    int le, ri, mid, swap;
     
    le = left;
    ri = right;
    mid = list[(left + right) / 2];
     
    while(le <= ri) {
        while(list[le] < mid && le < right) {
            le++;
        }
        while(list[ri] > mid && ri > left) {
            ri--;
        }
        if(le <= ri) {
            swap = list[le];
            list[le] = list[ri];
            list[ri] = swap;
            le++;
            ri--;
        }
    }
     
    if(ri > left) {
        quick_sort(list, left, ri);
    }
    if(le < right) {
        quick_sort(list, le, right);
    }
}
