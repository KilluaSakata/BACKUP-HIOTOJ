#include<stdio.h>

int main()
{
	int count, counter,ncounter,ncount;
	scanf("%d", &count);
	for (counter = 0; counter < count / 2; counter++)
	{
		if (counter == 0) ncount = 1;
		else ncount = ncount + 2;
		for (ncounter = 0; ncounter < count - ncount; ncounter++)
		{
			printf(" ");
		}
		for (ncounter = 0; ncounter < ncount; ncounter++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (counter = 0; counter < count; counter++)
	{
		printf("*");
	}
	printf("\n");
	for (counter = count - 2; counter > 1; counter--)
	{
		if (counter == count - 2) ncount = count - 2;
		else ncount = ncount - 2;
		for (ncounter = 0; ncounter < count - ncount; ncounter++)
		{
			printf(" ");
		}
		for (ncounter = 0; ncounter < ncount; ncounter++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}