#include "sort.h"
/**
 * shell_sort - sort array by slection
 *
 * @array: Array to organize
 * @size: Size of the array
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t s = 0, i, j;

	while (s < size / 3)
	{
		s = 3 * s + 1;
	}
	while (s)
	{
		for (i = s; i < size; i++)
		{
			for (j = i; j >= s && array[j - s] > array[j]; j -= s)
			switch_a(&array[j], &array[j - s]);
		}
		print_array(array, size);
		s = (s - 1) / 3;
	}
}

/**
 * switch_a - switch array elemtnts
 *
 * @p_a: pointer to first position
 * @p_b: pointer to second position
 *
 */
void switch_a(int *p_a, int *p_b)
{
	int temp;

	temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}
