#include<stdio.h>

int main(void)
{
	int counter;
	for (counter = 1; counter < 5; ++counter)
	{
		printf("%d\n", counter);
	}
	printf("Broke out of loop at counter == %d", counter);
	return 0;
}