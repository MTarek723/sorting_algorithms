#include "sort.h"
/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
*/
void bubble_sort(int *array, size_t size)
{
int i;
int j;
int temp;
if (array == NULL)
{
return;
}
for (i = 0; i < size - 1; ++i)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[n] > array[n + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = holder;
print_array(array, size);
}
}
}
}
