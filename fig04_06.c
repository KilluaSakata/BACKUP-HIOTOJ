#include<stdio.h>
#include<math.h>

int main()
{
	printf("Year    Amount on deposit\n");
	double mount;
	for (int counter = 1; counter <= 10; counter++)
	{
		mount = 1000*pow(1.05,counter);
		printf("%4d%21.3lf", counter, mount);
		printf("\n");
	}
	return 0;
}
