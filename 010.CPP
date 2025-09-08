#include<stdio.h>
#include<conio.h>

	void main()

{
	int  n, fact = 1,i;
	clrscr();

	printf("Enter value of n");
	scanf("%d",&n);

	while(i>n)
   {
	i = i-1;
	fact = fact*i;
   }
	printf("factorial of %d = %d",n,fact);
	getch();
}