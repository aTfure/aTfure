#include <stdio.h>
#include <stdlib.h>
/* An update of lardo.c
 * increment from w+1 to w++
 * changes occur in line 14 and 16.
 */

int main()
{
	char weight[4];
	int w;

	printf("Enter your weight:");
	gets(weight);
	w=atoi(weight);

	printf("Here is what you weigh now: %i\n",w);
	w++;
	printf("Your weight after the potatoes: %i\n",w);
	w++;
	printf("Here is your weight after the mutton: %i\n",w);
	w+8;
	printf("And your weight after the dessert: %i pounds!\n",w);
	printf("Lardo!\n");
	return(0);
}
