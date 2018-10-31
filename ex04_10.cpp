#include<iomanip>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	double num, sum = 0, counter = 0;
	while (std::cout << "Enter an integer ( 9999 to end ):" << endl && scanf("%lf", &num) && num != 9999)
	{
		counter++;
		sum = sum + num;
	}
	if (counter == 0)
	{
		std::cout << "No values were entered." << endl;
	}
	else
	{
		sum = sum / counter;
		std::cout << "The average is: " << fixed << setprecision(2) << sum << endl;
	}
	return 0;
}