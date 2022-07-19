/* Internal improvement to Lobby1
 * Not using else if instead  switch-case
 * The switch command in line 19 takes the single command typed at the keyboard and tells the various case statements in its curly braces to find a match
 * Each of the case statement compares its character constant with the value of avriable c.
 * If there is a match, the statement belonging to that case is executed.
 * The break in each case statement tells the compiler thet the switch-case thing is done and to skip the rest of the statement.
 * If the break is missing, execution falls through to the next group of case statements,which are then executed, no matter what.
 * Missing breaks are the bane of switch-case loops
 * The final item in the switch-case is the default. It is an option that get executed if no match occurs.
 */
#include <stdio.h>

int main()
{
	char c;

	printf("Please make your treat selection:\n");
	printf("1 - Beverage.\n");
	printf("2 - Candy.\n");
	printf("3 - Hot dog.\n");
	printf("4 - Popcorn.\n");
	printf("Your choice:");

/* Figure out what they typed */

	c=getchar();
	switch(c)
	{
		case '1':
		printf("Beverage\nThat will be $8.00\n");
		break;
		case '2':
		printf("Candy\nThat will be $5.50\n");
		break;
		case '3':
		printf("Hot dog\nThat will be $10.00\n");
		break;
		case '4':
		printf("Popcorn\nThat will be $7.50\n");
		break;
		default:
		printf("That is not a proper selection.\n");
		printf("I'll assume you're just not hungry.\n");
		printf("Can I help whoever's next?\n");
	}
	return(0);
}
