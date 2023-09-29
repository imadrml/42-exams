#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++));
	return (s1);
}

int	main(void)
{
	char source[] = "Hello, World!";
	char destination[20]; // Make sure the destination array is large enough to hold the copied string

	// Copy the string from source to destination
	ft_strcpy(destination, source);

	// Write the copied string to the standard output
	write(1, destination, sizeof(destination));

	return (0);
}
/*So, this line of code effectively copies characters from s2 to s1 until it reaches the end of the source string (s2) or until it encounters a null character ('\0'), which marks the end of C-style strings. This is a common way to implement string copying in C.
*/