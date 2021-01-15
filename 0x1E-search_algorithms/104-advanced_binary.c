#include "search_algos.h"

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
	for (i = low; i < high; i++)
	{
		printf("%d", array[i]);
		if (i < high - 1)
			printf(", ");

	}
	printf("\n");
}

int leftmost_search(int *array, int low, int high, int value)
{
	int mid, res;

	if (low < high)
	{
		print_array(low, high, array);
		mid = (low +  high) / 2;
		if (array[mid] < value)
			res = leftmost_search(array, mid + 1, high, value);
		else
			res = leftmost_search(array, low, mid - 1, value);
		return (res);
	}
	else
		return (low);
}
/**
 * binary_search - unction that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, mid = 0, high = size, res = 0;

	if (array == NULL)
		return (-1);
	print_array(low, high, array);
	mid = ((low +  high) / 2) - 1;
	if (array[mid] < value)
		res = leftmost_search(array, mid + 1, high, value);
	else
		res = leftmost_search(array, low, mid + 1, value);
	if (res < (int)size && array[res] == value)
		return (res);
	else
		return (-1);
}
