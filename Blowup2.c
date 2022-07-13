#include <stdio.h>
/* Using logic to solve technical issue
 * A solution to blowup1.c
 * Make the compter to have a resonable selection and easy
 */

int main()
{
	char c;

	printf("Would you like your computer to explode?");
	c=getchar();
	if(c=='Y')
	{
		printf("OK: Configuring computer to explode now.\n");
		printf("Bye!\n");
	}
	else if(c=='y')
	{
		printf("OK: Configuring computer to explode now.\n");
		printf("Bye!\n");
	}
	else
	{
		printf("Okay. Whew!\n");
	}
	return(0);
}
