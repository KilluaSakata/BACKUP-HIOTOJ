#include<stdio.h>
#include<math.h>

int main()
{
	for (int count = 0; count < 6; count++)
	{
		double lilv = 0.05 + 0.01*count;
		printf("Interest Rate: %lf\n", lilv);
		printf("Year    Amount on deposit\n");
		double mount;
		for (int counter = 1; counter <= 10; counter++)
		{
			mount = 1000 * pow(1 + lilv, counter);
			printf("%4d%21.3lf", counter, mount);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
