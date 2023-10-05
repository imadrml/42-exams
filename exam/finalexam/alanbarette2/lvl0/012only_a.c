// ======================================./0-1-only_a.txt=========================================
// Assignment name  : only_a
// Expected files   : only_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------
#include <unistd.h>

int		main(void)
{
	write(1, "a", 1);
	return(0);
}
// Write a program that displays a 'a' character on the standard output.
// ==========================================================================================
// ======================================./0-1-only_z.txt=========================================
// Assignment name  : only_z
// Expected files   : only_z.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// Write a program that displays a 'z' character on the standard output.
// ==========================================================================================
#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return(0);
}



// ======================================./0-2-aff_z.txt=========================================
// Assignment name  : aff_z
// Expected files   : aff_z.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the first 'z'
// character it encounters in it, followed by a newline. If there are no
// 'z' characters in the string, the program writes 'z' followed
// by a newline. If the number of parameters is not 1, the program displays
// 'z' followed by a newline.

// Example:

// $> ./aff_z "abc" | cat -e
// z$
// $> ./aff_z "dubO a POIL" | cat -e
// z$
// $> ./aff_z "zaz sent le poney" | cat -e
// z$
// $> ./aff_z | cat -e
// z$
// ==========================================================================================

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1); 
	return (0);
}
// / write(1, "z\n", 2);
// ==========================================================================================