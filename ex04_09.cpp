#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int numbers, num, sum=0;
	scanf("%d", &numbers);
	for (int counter = 0; counter < numbers; counter++)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	std::cout << sum << endl;
	return 0;
}