#include "search_algos.h"

int print_array(int *array, int low, int high)
{
	char *seperator = NULL;

	printf("Searching in array: ");

	for (; low <= high; low++)
	{
		if (seperator != NULL)
			printf("%s", seperator);
		printf("%d", array[low]);
		seperator = ", ";
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;
	
	if (array == NULL)
		return (-1);

	while (low != high)
	{
		print_array(array, low, high);
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
