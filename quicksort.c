#include "library.h"

void    quick_sort(int *list, int left, int right)
{
    int i, j, x, swap;
     
    i = left;
    j = right;
    x = list[(left + right) / 2];
     
    while(i <= j) {
        while(list[i] < x && i < right) {
            i++;
        }
        while(list[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            swap = list[i];
            list[i] = list[j];
            list[j] = swap;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(list, left, j);
    }
    if(i < right) {
        quick_sort(list, i, right);
    }
}
