#include <stdio.h>
/* Logic use of AND.
 * A comparison of BLOWUP series
 */

int main()
{
	char c,d;

	printf("Enter the character code of self distruction?");
	c=getchar();
	fflush(stdin);				/* Use fpurge(stdin) in unix */

	printf("Input number code to confirm self-destruct?");
	d=getchar();

	if(c=='G' && d=='0')
	{
		printf("AUTO DESTRUCT ENABLED!\n");
		printf("Bye!\n");
	}
	else
	{
		printf("Okay. Whew!\n");
	}
	return(0);
}
