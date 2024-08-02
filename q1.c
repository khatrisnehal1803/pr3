#include<stdio.h>
#include<conio.h>

main()
{
	char ch='a';
	
	do
	{
		printf("%c\n",ch);
		ch+=4;
	}while(ch<='z');
}