#include "search_algos.h"

/**
 * exponential_search -function that searches for a value in a sorted array of
 * integers using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, last = 0;

	if (array == NULL)
		return (-1);
	while (bound < (int)size && bound < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		last = bound;
		bound *= 2;
	}
	if (bound >= (int)size)
	{
		bound = size - 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", last, bound);
	return (binary_search2(array, last, bound, value));
}

/**
 * binary_search2 - unction that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @last: last checked index of the value on the array
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index of the value searched. -1 on failure
 */
int binary_search2(int *array, int last, size_t size, int value)
{
	int low = last, mid, high = size;
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		mid = (low +  high) / 2;
		print_array(low, high, array);
		if (value < array[mid])
			high = mid - 1;
		else if (value == array[mid])
			return (mid);
		else if (low == high && value == array[mid])
			return (low);
		else if (low == high && value != array[mid])
			return (-1);
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
