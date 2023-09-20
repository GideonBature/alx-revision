#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;
	
	if (array == NULL)
		return (-1);

	while (low != high)
	{
		mid = (low + high) / 2;
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

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
