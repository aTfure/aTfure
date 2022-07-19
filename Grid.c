#include <stdio.h>
/* The first, outer for loops counts from 1 to 10.
 * The inner for loop may seem strange but its not. Its only taking advantage of the dual-number/character of letters.
 * Tha character variable b starts out equal to the letter A and is incremented one letter at a time, up to letter K.
 * What happens is that b is set equal to the letter K's ASCII value, which is 75.
 * The printf function displays the numbers and the letter as the inner loop spins. The outer loopstays at one number while the letters A through K are printed.
 * Then the outer loop is increment, and the next row is printed.
 * Note that printf function has a space after the %c character.
 * Thats what keeps the columns in the grid from running into each other.
 * The putchar function displays a single character on the screen.
 * IN this program it is used to display a \n newline character at the end of each row.
 */

int main()
{
	int a;
	char b;

	printf("Here is thy grid...\n");

	for(a=1;a<10;a++)
	{
		for(b='A';b<'K';b++)
		{
			printf("%d-%c ",a,b);
		}
		putchar('\n');
/* end of line*/
	}
	return(0);
}
