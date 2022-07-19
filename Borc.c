#include <stdio.h>
/* The program contains an endless for loop.
 * Furthermore, the loop is cut short by the continue statement.
 * After the value of x grows to be more than 5, the continue is skipped and, finally, a break statement stops the endless loop.
 * The for(;;) parts indicate an endless loop. Reads 'for ever'
 * Notice the space after the %d and the comma in the printf statement.
 * The continue statement causes the rest of the loop_ the printf and break_ to be skipped, and then the loop is repeated.
 * The increasing value of x proves that the loop continue to spin.
 * An else condition doesnt have to be present to complement the if in Line 10.
 * Thats becouse continue halt the program right then and there.
 * If no continue was present, the break in line 16 will ensure that the loop ran through only once.
 */

int main()
{
	int x=0;

	for(;;)
	{
		x++;
		if(x<=5)
		{
			printf("%d, ",x);
			continue;
		}
		printf("%d is greater than 5!\n",x);
		break;
	}
	return(0);
}
