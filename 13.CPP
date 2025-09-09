#include<stdio.h>
#include<conio.h>

	void main()
{
	int i=0 ,sum = 0;
	clrscr();



	for(i = 0 ;i<=100 ; i+=13)
{
	sum = sum +=
	  i;
}
	printf("sum of all %d divisible by 13 between 1 and 100= %d", sum);
	getch();
}