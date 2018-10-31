#include<stdio.h>
#include<math.h>
#define money 100000

int main(int sum,int money1,double money2)
{
	printf("Year    Amount on deposit\n");
	for (int counter = 1; counter <= 10; counter++)
	{
		sum = money * pow(1.05, counter);
		money1 = sum / 100;
		money2 = sum % 100;
		printf("%4d%21.2lf\n", counter, money1+(money2/100));
	}
	return 0;
}