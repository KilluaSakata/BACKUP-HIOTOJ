#include<stdio.h>

int main(int a, int b)
{
	int x, y;
	scanf("%d %d", &x, &y);
	a = !(x < 5) && !(y >= 7);
	b = !((x < 5) || (y >= 7));
	printf("%d\n%d\n", a, b);
	if (a == b) printf("Equivalent\n");
	return 0;
}