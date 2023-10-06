// ======================================./1-0-ft_strcpy.txt=========================================
// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);
// ==========================================================================================
#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
    while((*s1++ = *s2++))
        ;
    return(s1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    char a[50] = ;
    char c[] = "hello world!";
    int i = 0;

    ft_strcpy(a, c);
    while(a[i])
    {
        ft_putchar(a[i++]);
    }
    // for (int i = 0; a[i] != '\0'; i++){
    //     ft_putchar(a[i]);
    // }
    return(0);
}
/*#include <stdio.h>

char *ft_strcpy(char *s1, char *s2);

int main(void)
{
    char boy[] = "harry";
    char girl[] = "sally";

    printf("boy is: %s\n", boy);
    printf("girl is: %s\n", girl);
    ft_strcpy(boy, girl);
    printf("boy is: %s\n", boy);
    return (0);
}
*/
// ====================================cour======================================================
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char source[] = "Hello, World!";
    char destination[20]; // Define a destination buffer

    
    ft_strcpy(destination, source);

    // Print the result to verify
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/
// ====================================second======================================================
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
	
int main(void)
{
	char villian [] = "frogger";
	int i = sizeof villian;
	char hero[i];

	ft_strcpy(hero, villian);
	printf("%s\n", hero);
	return 0;
}
// ====================================second======================================================
