#include<cstdio>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int paycode=0;
	int manager = 0, hourly = 0, commussion = 0, pieceworker = 0;
	double money, hour, extrahour, salary, sumsalary, sale, salary3, pieces, per, salary2;
	while (std::cout << "Enter paycode ( -1 to end ):" << endl && scanf("%d", &paycode) && paycode != -1)
	{
		switch (paycode)
		{
		case 1:
			manager++;
			std::cout << "Manager selected.\nEnter weekly salary:" << endl;
			scanf("%lf", &money);
			std::cout << fixed << setprecision(2) << "The manager's pay is $" << money << "\n" << endl;
			break;
		case 2:
			hourly++;
			extrahour=0;
			std::cout << "Hourly worker selected.\nEnter the hourly salary:" << endl;
			scanf("%lf", &salary);
			std::cout << "Enter the total hours worked:" << endl;
			scanf("%lf", &hour);
			extrahour = hour - 40;
			if (extrahour <= 0)
			{
				sumsalary = salary * hour;
			}
			else
			{
				sumsalary = (salary * 40) + (1.5*salary*extrahour);
			}
			std::cout << "The worker's pay is $" << fixed << setprecision(2) << sumsalary << "\n" << endl;
			break;
		case 3:
			commussion++;
			std::cout << "Commission worker selected.\nEnter gross weekly sales:" << endl;
			scanf("%lf", &sale);
			salary3 = sale * 0.05 + 250;
			std::cout << "The commission worker's pay is $" << fixed << setprecision(2) << salary3 << "\n" << endl;
			break;
		case 4:
			pieceworker++;
			std::cout << "Pieceworker selected.\nEnter number of pieces:" << endl;
			scanf("%lf", &pieces);
			std::cout << "Enter wage per piece:" << endl;
			scanf("%lf", &per);
			salary2 = pieces * per;
			std::cout << "The pieceworker's pay is $" << fixed << setprecision(2) << salary2 << "\n" << endl;
			break;
		default:
			std::cout << "Invalid pay code." << "\n" << endl;
			break;
		}
	}
	std::cout << "Total number of managers paid          : " << manager << endl;
	std::cout << "Total number of hourly workers paid    : " << hourly << endl;
	std::cout << "Total number of commission workers paid: " << commussion << endl;
	std::cout << "Total number of pieceworkers paid      : " << pieceworker << "\n" << endl;
	return 0;
}