// ======================================./1-0-ft_strlen.txt=========================================
// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);
// ==========================================================================================
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char monster[] = "ogrefly";
    printf("%s has %d characters", monster, ft_strlen(monster));
    return (0);
}
// ==========================================================================================
