// ======================================./2-1-alpha_mirror.txt=========================================
// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.

// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'

// and so on.

// Case is not changed.

// If the number of arguments is not 1, display only a newline.

// Examples:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>
// ==========================================================================================
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] =< 'Z')
			{
				argv[1][i] = 155 - argv[1][i];
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				argv[1][i] = 219 - argv[1][i];
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// ==========================================================================================
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_alpha_mirror(int c)
{
	return (c = (c >= 'A' && c <= 'Z') ? 'Z' - (c - 'A') : 'z' - (c - 'a'));
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (ft_isalpha(*av[1]))
				ft_putchar(ft_alpha_mirror(*(av[1]++)));
			else
				write(1, av[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (1);
}
