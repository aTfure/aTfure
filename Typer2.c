#include <stdio.h>
/* Loops designed without an end.
 * Condition elsewhere is however designed to break the loop.
 * A replacement of file Typer1.c
 * Using while loop instead of for 
 */

int main()
{
	char ch;

	puts("Start typing");
	puts("Press ¬ then Enter to stop");

	while(getchar() != '¬')
		;

	printf("Thanks!\n");
	return(0);
}
