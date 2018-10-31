#include<stdio.h>

int main()
{
	int number=1;
	while (number<=100)
	{
			static char *roman[][10] = { "","I","II","III","IV","V","VI","VII","VIII","IX","","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","","M","MM","MMM" };
			int j, i, n;
			printf("%d:", number);
			for (j = 0, i = 10000; j < 4; ++j, i /= 10)
			{
				n = (number%i) / (i / 10);
				if (roman[3 - j][n] == "")
				{
					continue;
				}
				printf("%s", roman[3-j][n]);
			}
			printf("\n");
			number++;
	}
	return 0;
}