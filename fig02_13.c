#include<stdio.h>

int main()
{
   printf("Enter two integers, and I will tell you\nthe relationships they satisfy:\n");
   int a;
   int b;
   scanf("%d%d",&a,&b);
   if(a==b)
   {
       printf("%d is equal to %d\n",a,b);
   }
   if(a!=b)
   {
       printf("%d is not equal to %d\n",a,b);
   }
   if(a<b)
   {
       printf("%d is less than %d\n",a,b);
   }
   if(a>b)
   {
       printf("%d is larger than %d\n",a,b);
   }
   if(a<=b)
   {
       printf("%d is less than or equal to %d\n",a,b);
   }
   else
   {
       printf("%d is larger than or equal to %d\n",a,b);
   }
    return 0;
}
