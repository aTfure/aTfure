#include <stdio.h>

int add(int a, int b, int c)
{
	int result;
	result = a + b + c;
	return(0);
}

int main()
{
	int a;
	int b;
	b = 98;
	a = 1 + 2 + 3 * 4 - 1;
	b = 23 + add(32, a, a + b);
	return(0);
}
