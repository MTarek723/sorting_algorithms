#include "sort.h"
/**
 * splitt - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index of the subset to order.
 * @high: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int splitt(int *array, int low, int high, size_t size)
{
int i = low - 1;
int pivot = array[high];
int j, temp;
for (j = low; j < high; ++j)
{
if (array[j] < pivot)
{
++i;
if (array[i] != array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
temp = array[high];
array[high] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
return (i + 1);
}
/**
 * qwck_s - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void qwck_s(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = splitt(array, low, high, size);
qwck_s(array, low, pivot - 1, size);
qwck_s(array, pivot + 1, high, size);
}
}
/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
qwck_s(array, 0, size - 1, size);
}

