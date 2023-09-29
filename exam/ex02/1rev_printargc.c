#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i += 1;
		while (i)
			write(1, &argv[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}

/*
Your code appears to be a program that takes a single command-line argument (a string) and reverses and prints it using the write function. It checks if there is exactly one argument (argc == 2) and then iterates through the characters of the string in reverse order, writing each character to standard output.

Here's a breakdown of your code:

    #include <unistd.h>: This includes the necessary header for the write function.

    int main(int argc, char *argv[]): The main function takes command-line arguments. argc is the count of arguments, and argv is an array of strings containing the arguments.

    int i = 0;: Declares an integer variable i and initializes it to 0.

    if (argc == 2): Checks if there is exactly one command-line argument (the program name itself counts as one argument).

    Inside the if block:
        while (argv[1][i]): Iterates through the characters of the input string (the first argument, argv[1]) until it reaches the null terminator ('\0').
        i += 1;: Increments i to move to the next character.

    After the first while loop:
        while (i): This is another loop that iterates until i becomes 0. It effectively reverses the order of characters.

    Inside the second while loop:
        write(1, &argv[1][--i], 1);: Writes the characters in reverse order to standard output.

    write(1, "\n", 1);: Writes a newline character to standard output after reversing the string.

    return (0);: Exits the program with a status code of 0, indicating successful execution.

Your code looks correct for its intended purpose, which is to reverse and print a single command-line argument.
*/