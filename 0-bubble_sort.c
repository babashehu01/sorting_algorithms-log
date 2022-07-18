#include "sort.h"
/**
 * bubble_sort - sorts a given array
 *
 * @array: input array
 * @size: sizeof inputed array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swap, flag = 1;
	size_t i;
	
	if (array == NULL)
		return
	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				flag++;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
