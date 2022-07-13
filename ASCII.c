#include <stdio.h>
/* ASCII PROGRAM
 * Displays the characters and the codes.
 * From Code 32 onn up to Code 127.
 */

int main()
{
	unsigned char a;

	for(a=32 ; a<128 ; a=a+1)
		printf("%3d = '%c'\t",a,a);
	return(0);
}
