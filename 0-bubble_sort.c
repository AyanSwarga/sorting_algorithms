#include "sort.h"

/**
 * bubble_sort: Bubble sort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
int i, j, temp;

if (size <= 0)
return;
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
}
}
}
} 