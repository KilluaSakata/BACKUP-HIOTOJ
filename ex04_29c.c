#include<stdio.h>

void main(int x,int y)
{
	scanf("%d %d", &x, &y);
	int t1 = !((x <= 8) && (y > 4));
	int t2 = !(x <= 8) || !(y > 4);
	printf("%d\n%d\n", t1, t2);
	if (t1 == t2)
	{
		printf("Equivalent\n");
	}
}