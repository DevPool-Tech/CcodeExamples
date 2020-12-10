// DEVPOOL - https://www.youtube.com/channel/UC03vw5F2isFkbJhyEZU5bvg
// Subscribe for more upcoming videos

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 2020;
	int whileIncrement = 0;
	int doWhileCount = 0;

	printf("------For-------\n");

	for (int forIncrement = 0; forIncrement <= 5; forIncrement++)
	{
		printf("%d\n", year + forIncrement);
	}

	printf("------While-------\n");

	while (whileIncrement < 5)
	{
		printf("%d\n", year + whileIncrement);
		whileIncrement++;
	}

	printf("------Do While-------\n");

	do
	{
		printf("%d\n", year + doWhileCount);
		doWhileCount++;
	} while (doWhileCount < 5);

	system("PAUSE");

	return 0;
}
