#include<stdio.h>
int main(void)
{
	for (int counter = 1; counter <= 10; counter++)
	{
		if (counter == 5) continue;
		printf("%d\n", counter);
	}
	printf("Used continue to skip printing the value 5\n");
	return 0;
}