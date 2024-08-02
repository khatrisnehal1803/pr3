#include<stdio.h>
#include<conio.h>

main()
{
	int number,count=0;
	
	printf("enter a number: ");
	scanf("%d",&number);
	
	do
	{
		number/=10;
		count++;
	}while(number=0);
	
	printf("total digit:%d\n",count);
}