int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    len = ft_strlen(str) - 1;
    while(len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}
#include <unistd.h>

int ft_strlen(char *str);

char *ft_strrev(char *str);

int main(void) {
    char myString[] = "Hello, World!";

    // Reverse the string in-place
    ft_strrev(myString);

    // Print the reversed string
    write(1, myString, ft_strlen(myString));
    write(1, "\n", 1);

    return 0;
}

/*
Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
The `ft_strrev` function reverses the string "Hello, World!" in-place. Here's the result of calling `ft_strrev(myString)`:

Original string: "Hello, World!"
Reversed string: "!dlroW ,olleH"
*/
