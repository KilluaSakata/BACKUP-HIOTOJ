#include<stdio.h>

int main()
{
    int a, b, c, d, e, x;
    printf("Enter a five-digit number:\n");
    scanf("%d", &x);
    a = x / 10000;
    b = x % 10000 / 1000;
    c = x % 1000 / 100;
    d = x % 100 / 10;
    e = x % 10;
    printf("%d   %d   %d   %d   %d\n", a,b,c,d,e);
    return 0;
}
