#include<cstdio>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	for (int counter = 2; counter <= 30; counter = counter + 2)
	{
		sum = sum + counter;
	}
	std::cout << "Sum of the even integers from 2 to 30 is: " << sum << "\n" << endl;
	return 0;
}
