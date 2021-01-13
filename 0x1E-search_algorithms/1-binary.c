#include "search_algos.h"


/**
 * binary_search - unction that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		print_array(low, high, array);
		if (low == high)
			return (-1);
		mid = (low +  high) / 2;
		if (value < array[mid])
			high = mid - 1;
		else if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
	}
	return (-1);

}

/**
 * print_array -  print the array of the binary search
 * @low: the first item of the array
 * @high: the last item of the array
 * @array: the array to print
 * Return: None
 */
void print_array(int low, int high, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");

	}
	printf("\n");
}
