#include<stdio.h>

int calc(int a)
{
	if (a == 0) return 1;
	else
		return a * calc(a - 1);
}

int main()
{
	printf("n       Factorial of n\n");
	for (int n = 1; n <= 5; n++)
	{
		printf("%-8d%-14d\n", n, calc(n));
	}
	return 0;
}