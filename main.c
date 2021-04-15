#include <stdlib.h>
#include <stdio.h>
#include "library.h"
#define LIST_SIZE 1000

/*
* LIST_SIZE tamanho da lista criada
* cria uma lista com numeros aleatorio 
*/
int     *create_list(void)
{
    int *list;
    int counter;

    counter = 0;
    list = calloc(LIST_SIZE, sizeof(int));
    while (counter < LIST_SIZE)
    {
        list[counter] = rand();
        counter++;
    }
    list[counter] = '\0';
    return list;
}

int     main(void)
{
    int *list;

    list = create_list();
    quick_sort(list, 0, LIST_SIZE - 1);

    return (0);
}