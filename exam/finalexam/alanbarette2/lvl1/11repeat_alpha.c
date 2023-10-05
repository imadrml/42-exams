// ======================================./1-0-repeat_alpha.txt=========================================
// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
// ==========================================================================================
#include <unistd.h>

int letter_count(char c)
{
    int repeat;

    if(c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else if (c > 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else
        repeat = 1;
    return (repeat);
}

int main(int ac, char **av)
{
    int repeat;

    if(ac == 2)
    {
        while (*av[1])
        {
            repeat = letter_count(*av[1]);
            while(repeat --) //(repeat -= 1)
            {
                write(1, av[1], 1);
            }
            av[1]++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
// while (argv[1][i])
// {
//     repeat = lcase(argv[1][i]);
//     while (repeat--)
 
//      write(1, &argv[1][i], 1);
//         i++;
//  }
// ==========================================================================================
#include <unistd.h>
int	main(int ac, char **av)
{
	int	letter;
	int	repeat;

	if (ac == 2)
	{
		letter = 0;
		while (av[1][letter])
		{
			repeat = 1;
			if (av[1][letter] >= 'a' && av[1][letter] <= 'z')
				repeat += av[1][letter] - 'a';
			else if (av[1][letter] >= 'A' && av[1][letter] <= 'Z')
				repeat += av[1][letter] - 'A';
			while (repeat)
			{
				write(1, &av[1][letter], 1);
				repeat--;
			}
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// ==========================================================================================
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int             i;
	int             letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
			{
				letter = argv[1][i] - 63;
				while (--letter)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
			{
				letter = argv[1][i] - 95;
				while (--letter)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
