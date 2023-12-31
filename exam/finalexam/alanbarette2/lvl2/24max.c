
======================================./2-1-max.txt=========================================
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int *tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
==========================================================================================
#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int max;
	unsigned int i;

	i = 0;
	if (len)
	{
		max = tab[0];
		while (i < len)
		{
			if	(tab[i] > max)
				max = tab[i];
			i++;
		}
		return (max);
	}
	else
		return (0);
}

int	 main(void)
{
	int	n1[5] =  {10, 4, 5, 66, 6};
	int n2[5] = {-20, -55, -5, -10, -4};
	int	n3[5];
	printf("%d\n", max(n1, 5));
	printf("%d\n", max(n2, 5));
	printf("%d\n", max(n3, 0));
}

==========================================================================================

