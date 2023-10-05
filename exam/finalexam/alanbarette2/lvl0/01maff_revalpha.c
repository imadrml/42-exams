// ======================================./0-1-maff_revalpha.txt=========================================
// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$
// ==========================================================================================
// #include <unistd.h>

// int	main(int argc, char *argv[])
// {
// 	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
// }


// ==========================================================================================

// #include <unistd.h>

// int main(void)
// {
//     char even = 'Y';
//     char odd = 'z';

//     while( even >= 'A' && odd >= 'b')
//     {
//         write(1, &odd, 1);
//         write(1, &even, 1);
//         odd -= 2;
//         even -= 2;
//     }
//     write(1, "\n",1);
//     return(0);
// }
// ==========================================================================================

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = '{';
	while (i-- > 'a')
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32);
	ft_putchar('\n');
	return (0);
}



// ==========================================================================================
