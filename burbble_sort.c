#include "library.h"
#include <stdio.h>

void burbble_sort(int *list, int size)
{
    int counter, counteraux, swap;
    
    counter = 0;
    counteraux = 0;
    while (counter < size - 1)
    {
        while (counteraux < size - counter - 1)
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