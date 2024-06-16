#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    if (array == NULL)
        return -1;

    while (left <= right)
    {
        /* Calculate mid-point */
        mid = (left + right) / 2;

        /* Print current sub-array being searched */
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        /* Check if value is present at mid */
        if (array[mid] == value)
            return mid;

        /* If value is smaller, ignore right half */
        else if (array[mid] > value)
            right = mid - 1;
        
        /* If value is larger, ignore left half */
        else
            left = mid + 1;
    }

    /* Value not present in array */
    return -1;
}

