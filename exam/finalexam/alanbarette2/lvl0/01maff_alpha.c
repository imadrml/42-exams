// ======================================./0-0-hello.txt=========================================
// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$
// ======================================****1******=========================================

#include <unistd.h>

int main(void)
{
    char c[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
    write(1, &c, sizeof c);
    write(1, "\n", 1);
    return(0);
}
// write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);

// ======================================****2******=========================================
// #include <unistd.h>

// int main(void)
// {
//     char even = 'B';
//     char odd = 'a';

//     while(even <= 'Z' && odd <= 'y')
//     {
//         write(1, &odd, 1);
//         write(1, &even, 1);
//         odd += 2;
//         even += 2;
//     }
//     write(1, "\n", 1);
//     return(0);
// }

// ======================================****3*****=========================================
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void maff_alpha(void)
{
    char even = 'B';
    char odd = 'a';

    while(even <= 'Z' && odd <= 'y')
    {
        ft_putchar(odd);
        ft_putchar(even);
        odd += 2;
        even += 2;
    }
    ft_putchar('\n');
}


int main(void)
{
    maff_alpha();
    return(0);
}
