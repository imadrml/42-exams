// Assignment name  : ft_print_numbers
// Expected files   : ft_print_numbers.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays all digits in ascending order.

// Your function must be declared as follows:

// void	ft_print_numbers(void);

// *-1
#include <unistd.h>

int main(void)
{
     char i = '0';

     while(i <= '9')
     {
         write(1, &i, 1);
         i++;
     }
     return(0);
}

// */2
#include <unistd.h>
 
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int i = 0;

    while(i <= 9)
    {
        ft_putchar(i + '0');
        ft_putchar('\n');
        i++;
    }
    write(1, "\n", 1);
    return(0);
}
// just playing with the new line
// *-3
#include <unistd.h>

void ft_print_number(void)
{
    write(1, "0123456789", 10);
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_number();
    return(0);
}
