#include <stdio.h>
/* Uses a for loop to count to 100.
 * Displays each number on the screen.
 * Indentations is used.
 * To indent one statement belonging to another
 * Even when the curly braces are ommitted.
 */

int main()
{
	int i;

	for(i=1 ; i<=10000 ; i=i+1)
		printf("%d\t",i);
	return(0);
}
