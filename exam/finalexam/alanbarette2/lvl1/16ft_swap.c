
// ======================================./1-2-ft_swap.txt=========================================
// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);
// ==========================================================================================

void	ft_swap(int *a, int *b)
{
    int temp;

    *temp = *a;
    *a = *b;
    *b = *temp;
}



// --------------**********************-----------------
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    *temp = *a;
    *a = *b;
    *b = *temp;
    printf("%d", *a);
    printf("%d", *b);
}

int main(void)
{
    int a = 1;
    int b = 2;

    ft_swap(&a, &b);
    return(0);
}

// --------------*********************---------------------
#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
	int old_age = 223;
	int young_age = 1;
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	ft_swap(&old_age, &young_age);
	printf("swap them ages!\n");
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	return (0);
}
