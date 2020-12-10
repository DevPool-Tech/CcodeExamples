// DEVPOOL - https://www.youtube.com/channel/UC03vw5F2isFkbJhyEZU5bvg
// Subscribe for more upcoming videos

// C language dosnt have classes but it has Structs. If you like you can use C++ to experiment with classes
#include <stdio.h>
#include <stdlib.h>

struct Person
{
	char name[50] = "DevPool";
	int age = 1;
	char email[50] = "notMyEmail@notMyEmail.com";

	void whoIsThis()
	{
		printf("%s - %d - %s\n", name, age, email);
	}
};

int main()
{
	struct Person p1;
	struct Person DevPool;

	int newAge = DevPool.age = 50;

	printf("%d\n", newAge);

	p1.whoIsThis();

	system("PAUSE");

	return 0;
}
