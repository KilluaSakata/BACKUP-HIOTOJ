#include<stdio.h>

int main(void)
{
	int counter;
	for (counter = 1; counter <= 10; counter++)
	{
		printf("%d\n", counter);
		if (counter == 4)
		{
			counter++;
		}
	}
	printf("Unused continue to skip printing the value 5\n");
	return 0;
}