#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */

void print_array(int *array, size_t low, size_t high)
{
	char *delimiter = NULL;

	printf("searching in array: ");
	for (; low <= high; low++)
	{
		if (delimiter != NULL)
			printf("%s", delimiter);
		printf("%d", array[low]);
		delimiter = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers using the
 *		binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (!array)
		return (-1);
	print_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
		print_array(array, low, high);
	}
	/* for edge case */
	if (array[high] == value)
		return (high);
	return (-1);
}
