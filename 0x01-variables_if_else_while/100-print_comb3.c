#include <stdio.h>
/**
*main - prints all possible combinations of two different digits,
*       in ascending order, seperated by a comma follwed by a space.
*
*Return: Always 0 (success/correct)
*/
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar(digit1 % 10) + '0';
putchar(digit2 % 10) + '0';

if (digit1 == 8 && digit2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
