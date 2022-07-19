#include <stdio.h>
/* The while(!done) spins round and round while switch-case thing handles all the program input.
 * One of the switch-case item handles the condition when the loop must stop.
 * In this the key is equal sign.
 * It set the value of the done variable to 1. The while loop then stops reapeating.
 * C views the value 0 as FALSE.
 * So, by setting done equal to 0, by using the !(not), The loop is executed.
 * The reason for all these is so that the loop while (!done) reads 'While not done'.
 * The various case structure then examines the keys that are pressed.
 * For each match 1 through 4, three things happen; 
 * The item that is ordered is displayed on the screen.
 * The total is increased by the cost of the item(Total+=3)
 * The break statement bust out of the switch_case thing.
 * At this point, the while loop continues to repeat as additional selections are made.
 * You may remember. total= total+value
 */

int main()
{
	char c;
	int done;
	float total=0;

	printf("Please make your treat selection:\n");
	printf("1 - Beverage.\n");
	printf("2 - Candy.\n");
	printf("3 - Hot dog\n");
	printf("4 - Popcorn\n");
	printf("= - Done\n");
	printf("Your choice:\n");

/* Figure out what they typed*/

	done=0;
	while(!done)
	{
		c=getchar();
		switch(c)
		{
			case '1':
				printf("Beverage\t$8.00\n");
				total+=8;
				break;
			case '2':
				printf("Candy\t\t$5.50\n");
				total+=5.5;
				break;
			case '3':
				printf("Hot dog\t\t$10.00\n");
				total+=10;
				break;
			case '4':
				printf("Popcorn\t\t$7.50\n");
				total+=7.5;
				break;
			case '=':
				printf("= Total of $%.2f\n",total);
				printf("Please pay the cashier.\n");
				done=1;
				break;
			default:
				printf("Improper selection.\n");
		}	/* end switch */
	}	/* end while */
	return(0);
}
