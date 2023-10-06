// ======================================./1-0-ulstr.txt=========================================
// Assignment name  : ulstr
// Expected files   : ulstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and reverses the case of all its letters.
// Other characters remain unchanged.

// You must display the result followed by a '\n'.

// If the number of arguments is not 1, the program displays '\n'.

// Examples :

// $>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
// l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
// $>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
// s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
// $>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
// 3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
// $>./ulstr | cat -e
// $
// ==========================================================================================
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char letter;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            letter = av[1][i];
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                letter -= 32;
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                letter += 32;            
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}

// ---------------------*********************------------------------
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char 	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter += 32;
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
				letter -= 32;
			write(1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// -------------------**********************-------------------------------------------********************-------------------
#include <unistd.h>

void	ulstr(char *s)
{
	char	c;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			c = *s - 32;
		else if (*s >= 'A' && *s <= 'Z')
			c = *s + 32;
		else
			c = *s;
		write(1, &c, 1);
		s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
// ------------------******************-----------**********************----------------------------------



