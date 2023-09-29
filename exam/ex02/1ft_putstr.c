#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i]) //(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(void)
{
    char name;
    name[] = "imad eddine";
    // char name[] = "imad eddine";
    ft_putstr(name);
    return(0);
}