#include<stdio.h>

void main(int a, int b, int g)
{
	scanf("%d %d %d", &a, &b, &g);
	int q = !(a == b) || !(g != 5);
	int w = !((a == b) && (g != 5));
	printf("%d\n%d\n", q, w);
	if (q == w) printf("Equivalent\n");
}