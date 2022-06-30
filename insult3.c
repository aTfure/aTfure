#include <stdio.h>

int main(void)
{
	char jerk[20];
	puts("Name some jerk you now:");
	gets(jerk);
	puts("Yeah, I think %s is a jerk, too.\n",jerk);
	return(0);
}
