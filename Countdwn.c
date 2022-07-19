/* an important program for NASA to properlt launch America's spacecraft. */

#include <stdio.h>

int main()
{
	int start;
	long delay;
	do
	{
	printf("Please enter the number to start\n");
	printf("the countdown (1 to 100):");
	scanf("%d",&start);
	}
	while(start<1 || start>100);
/*This loop above ensures they typed in a proper value.
 * The countdown loop.
 * Inserting a delay loop.
 */

	do
	{
		printf("T-minus %d\n",start);
		start--;
		for(delay=0;delay<1000000;delay++);
	}
	while(start>0);

	printf("Zero!\nBlast off!\n");
	return(0);
}
