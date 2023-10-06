// ======================================./1-2-first_word.txt=========================================
// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
// ========================================my code==================================================
#include <unistd.h>

void ft_putchar(cahr c)
{
    write(1, &c, 1);
}

int main(int ac, char av)
{
    int i = 0;
    if (ac == 2)
    {
        while((av[1][i] == ' ' || av[1][i] == '\t') && (av[1][i]))
        {
            i++;
        }
        while(av[1][i] != '\0'&& av[1][i] != ' ' && av[1][i] != '\t')
        {
            ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
//     write(1, "\n", 1);
    return(0)
}

// ==========================================================================================
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
// --------------------------------****************-----------------------
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }    
	while(av[1][i])
    {
        if (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        write(1, &av[1][i], 1);
        i++;
        if (av[1][i] == ' ' || av[1][i] == '\t')
            break;
    }
	ft_putchar('\n');
	return (0);
}

// ------------------------************************-----------------------
#include <unistd.h>
int	ft_isspace(int i)
{
	if (i == '\t' || i == '\n' || i == '\r' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isspace((argv[1][i])))
			i += 1;
		while (!(ft_isspace(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

// ------------------*******************----------------------
