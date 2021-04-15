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
    list = malloc(LIST_SIZE * sizeof(int));
    if(list == NULL)
    {
        printf("ERROR");
        abort();
    }
    while (counter <= LIST_SIZE)
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
    int counter;

    list = create_list();
    quick_sort(list, 0, LIST_SIZE - 1);
    counter = 0;
    while (counter < LIST_SIZE)
    {
        printf("%i :",list[counter]);
        counter++;
    }

    list = create_list();
    insertion_sort(list, LIST_SIZE);
    counter = 0;
    while (counter < LIST_SIZE)
    {
        printf("%i :",list[counter]);
        counter++;
    }
    return (0);
}