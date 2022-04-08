#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 *  
 * main - prints is positive and negetive
 * Return: returns zero if program exits weel
 *     */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
