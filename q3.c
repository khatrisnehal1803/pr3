#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter a number : ");
	scanf("%d",&n);
	
	int ld=n%10;
	printf("last digit : %d\n",ld);
	
	while (n>9)
	{
		n=n/10;
	}
	
	printf("first digit : %d\n\n",n);
	printf("sum or first and last digit : %d",ld+n);
}