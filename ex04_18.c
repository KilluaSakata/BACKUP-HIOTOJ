#include<stdio.h>

int main(int a,int b,int c,int d,int e)
{
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	for (int counter = 0; counter < a; counter++)
	{
		printf("*");
	}
	printf("\n");
	for (int counter = 0; counter < b; counter++)
	{
		printf("*");
	}
	printf("\n");
	for (int counter = 0; counter < c; counter++)
	{
		printf("*");
	}
	printf("\n");
	for (int counter = 0; counter < d; counter++)
	{
		printf("*");
	}
	printf("\n");
	for (int counter = 0; counter < e; counter++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}