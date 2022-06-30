#include <stdio.h>

int main(void)
{
	char jerk[20];

	printf("Name some jerk you now:");
	gets(jerk);
	printf("Yeah, I think %s is a jerk, too.\n",jerk);
	return(0);
}
