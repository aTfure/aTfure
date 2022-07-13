#include <stdio.h>
/* Loops designed without an end.
 * Condition elsewhere is however designed to break the loop.
 */

int main()
{
	char ch;

	puts("Start typing");
	puts("Press ¬ then Enter to stop");

	for(;;)
	{
		ch=getchar();
		if(ch=='¬')
		{
			break;
		}
	}
	printf("Thanks!\n");
	return(0);
}
