#include<stdio.h>
#include<conio.h>

	void main()
{
	int i ,n, sum = 0,mean;
	clrscr();

	printf("Enter 10 numbers \n");


	for( i = 1; i<=10; i++)
	{
	printf("enter number %d",i);
	scanf("%d",&n);
	sum = sum +n;
	}
	mean = sum/10 ;

	printf("%d = %d+n",sum, sum, n);
	printf("%d = %d/10",mean,sum);

	getch();

}



