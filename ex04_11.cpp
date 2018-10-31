#include<cstdio>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(int num,int count)
{
	std::cout << "Enter the number of integers to be processed:" << endl;
	scanf("%d", &count);
	int smallest=0, counter=0;
	while (counter < count)
	{
		if (counter == 0)
		{
			std::cout << "Enter an integer:" << endl;
		}
		else
		{
			std::cout << "Enter next integer:" << endl;
		}
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
	std::cout << "The smallest integer is: " << smallest << endl;
	return 0;
}