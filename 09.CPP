#include<stdio.h>
#include<conio.h>

	int main()
{
	int i = 0, n , sum = 0;
	clrscr();

   printf("Enter value of n");
   scanf("%d",&n);

	while(i<=n)
	{
	printf("sum of first %d even numbers = %d",n , sum);
	i = i+2;
	sum = sum +i;
	}
   getch ();
   return 0;
}