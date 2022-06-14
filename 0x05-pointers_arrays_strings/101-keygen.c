#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char k[100];
	int num = 0;
	int random = 0;
	char *pass = p;

	srand(time(NULL));

	while (num < 2645)
	{
		random = rand() % 122;

		if (random > 32)
		{
			*pass = random;
			pass = pass + 1;
			num += random;
		}
	}

	*pass = (2772 - num);
	*(pass + 1) = '\n';
	printf("%s", p);
	return (0);
}
