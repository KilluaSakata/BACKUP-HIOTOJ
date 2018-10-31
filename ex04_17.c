#include<stdio.h>

int main(void)
{
	int account;
	double limit, balance;
	int counter = 0;
	while (1)
	{
		counter++;
		if (counter > 3) break;
		printf("Enter account, limit, balance:\n"); 
		scanf("%d %lf %lf", &account, &limit, &balance);
		limit = limit / 2;
		printf("New credit limit for account %d: %.2lf\n", account, limit);
		if (balance > limit)
			printf("Limit exceeded for account %d\n", account);
		printf("\n");
	}
	return 0;
}