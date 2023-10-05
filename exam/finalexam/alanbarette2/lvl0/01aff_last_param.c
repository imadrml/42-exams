
// ======================================./0-1-aff_last_param.txt=========================================
// Assignment name  : aff_last_param
// Expected files   : aff_last_param.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes strings as arguments, and displays its last
// argument followed by a newline.

// If the number of arguments is less than 1, the program displays a newline.

// Examples:

// $> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
// chats$
// $> ./aff_last_param "j'aime le savon" | cat -e
// j'aime le savon$
// $> ./aff_last_param
// $
// ==========================================================================================

#include <unistd.h>

int main(int ac, char *av[])
{
    int i;

    i = -1;
    if (ac > 1)
    {
        while (av[ac - 1][++i])
        {
            write(1, &av[ac - 1][i], 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}
// ==========================================================================================
/*In the provided code, i is initialized to -1 before entering the loop 
because it is going to be immediately incremented using the pre-increment 
operator ++i. Initializing i to -1 allows you to start from the first 
character of the string at argv[argc - 1] when the loop begins.

Here's a breakdown of how it works:

    i is initialized to -1.
    The while loop condition checks each character in argv[argc - 1] 
    one by one.
    The ++i operation increments i before using it to access the character 
    in the string. This is why it starts at -1 so that it points to the first 
    character (index 0) when the loop begins.
    Inside the loop, write is used to print each character to the standard output.

By starting with i as -1, you ensure that the first character of argv[argc - 1]
 is processed in the loop correctly.
*/
// ==========================================================================================
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else
    {
        while (av[ac-1][i])
        {
            ft_putchar(av[ac-1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
// ==========================================================================================
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else
    {
        while (av[ac-1][i])
        {
            write(1, &av[ac-1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}
// ==========================================================================================
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        while (*av[ac-1])
        {
            write(1, av[ac - 1]++, 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}
// ==========================================================================================
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
        while (*av[ac-1])
            write(1, av[ac - 1]++, 1);
    write(1, "\n", 1);
    return(0);
}