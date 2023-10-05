// Assignment name  : ft_countdown
// Expected files   : ft_countdown.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// https://github.com/alanbarrett2/42-Final-Exam/blob/master/0-0-ft_countdown/ft_countdown.c
// Write a program that displays all digits in descending order, followed by a
// newline.

// Example:
// $> ./ft_countdown | cat -e
// 9876543210$
// $>

// *-1
// #include <unistd.h>

// int main(void)
// {
//     write(1, "9876543210\n", 11);
//     return(0);
// }

// *-2
// #include <unistd.h>

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// int main(void)
// {
//     int i = 9;

//     while(i > -1)
//     {
//         ft_putchar(i + '0');
//         i--;
//     }
//     write(1, "\n", 1);
//     return(0);
// }
// 
// *-3
#include <unistd.h>

int main(void)
{
    char c;

    c = '9';
    while(c >= '0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
    return(0);
}
