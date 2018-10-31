#include<stdio.h>

int main()
{
    char grade;
    unsigned int a = 0, b = 0, c = 0, d = 0, f = 0;
    printf("Enter the letter grades.\nEnter the EOF character to end input.\n");
    while((grade=getchar())!=EOF)
    {
		switch (grade)
		{
		case 'A':
		case 'a':
			++a;
			break;
		case 'B':
		case 'b':
			++b;
			break;
		case 'C':
		case 'c':
			++c;
			break;
		case 'D':
		case 'd':
			++d;
			break;
		case 'F':
		case 'f':
			++f;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
        default:
			printf("%s","Incorrect letter grade entered. Enter a new grade.\n");
			break;
		}
    }
    printf("Totals for each letter grade are:\n");
    printf("A: %u\n", a);
    printf("B: %u\n", b);
    printf("C: %u\n", c);
    printf("D: %u\n", d);
    printf("F: %u\n", f);
    return 0;
}
