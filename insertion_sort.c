#include "library.h"
#include <stdio.h>

void insertion_sort(int *list, int size)
{
    int counter, counteraux, swap;
    
    counter = 0;
    counteraux = 0;
    while (counter < size)
    {
        while (counteraux < size)
        {
            if(list[counteraux] > list[counteraux + 1])
            {
                swap = list[counteraux];
                list[counteraux] = list[counteraux + 1];
                list[counteraux + 1] = swap;
            }
            counteraux++;
        }
        counteraux = 0;
        counter++;
    }
}