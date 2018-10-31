#include<stdio.h>

int main()
{
	int num, count;
	printf("Enter the number of integers to be processed:\n");
	scanf("%d", &count);
	int smallest = 0, counter = 0;
	while (counter < count)
	{
		printf("Enter an integer:\n");
		scanf("%d", &num);
		if (counter == 0) smallest = num;
		else
		{
			if (num < smallest)
			{
				smallest = num;
			}
		}
		counter++;
	}
	printf("The smallest integer is: %d\n", smallest);
	return 0;
}