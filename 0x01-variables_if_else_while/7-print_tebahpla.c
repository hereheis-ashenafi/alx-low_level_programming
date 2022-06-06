#include<stdio.h>
/**
 * main - main block
 * Description: prints alphabet in lowercase in reverese way
 * Return: 0
 */
int main(void)
{
char c = 'z';

while (c <= 'a')
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}

