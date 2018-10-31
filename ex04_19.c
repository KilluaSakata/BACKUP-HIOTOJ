#include<stdio.h>

int main(void)
{
	printf("Enter pairs of item numbers and quantities.\nEnter -1 for the item number to end input.\n");
	int product;
	double item;
	double sum=0;
	while (~scanf("%d", &product)&&product!=-1)
	{
		scanf("%lf", &item);
		switch (product)
		{
		case 1:
			sum = sum + 2.98*item;
			break;
		case 2:
			sum = sum + 4.50*item;
			break;
		case 3:
			sum = sum + 9.98*item;
			break;
		case 4:
			sum = sum + 4.49*item;
			break;
		case 5:
			sum = sum + 6.87*item;
			break;
		default:
			printf("Invalid product code:  %d\n	    Quantity:  5\n", product);
			break;
		}
	}
	printf("The total retail value was:  %.2lf\n", sum);
}