#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (!array)
		return(-1);

	while (low != high)
 	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else 
			low = mid + 1;
	}
	if (array[high] == value)
		return (high);	
	return (-1);
}
