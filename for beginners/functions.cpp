// DEVPOOL - https://www.youtube.com/channel/UC03vw5F2isFkbJhyEZU5bvg
// Subscribe for more upcoming videos

#include <stdio.h>
#include <stdlib.h>

int forLoop(int year, int day);
int whileLoop(int year);
int doWhileLoop(int year);

int main()
{
	int year = 2020;
	int day = 14;

	forLoop(year, day);
	whileLoop(year);
	doWhileLoop(year);

	system("PAUSE");

	return 0;
}

int forLoop(int year, int day)
{
	printf("------For-------\n");

	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", year + i);
	}

	return 0;
}

int whileLoop(int year)
{
	int i = 0;

	printf("------While-------\n");

	while (i < 5)
	{
		printf("%d\n", year + i);
		i++;
	}

	return 0;
}

int doWhileLoop(int year)
{
	int i = 0;

	printf("------Do While-------\n");

	do
	{
		printf("%d\n", year + i);
		i++;
	} while (i < 5);

	return 0;
}
